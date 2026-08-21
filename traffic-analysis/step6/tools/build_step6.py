#!/usr/bin/env python3
# Phase 6 产物生成器：findings.json / api_endpoints_full.md / secrets_full.md / native_findings_full.md
# 仅读取 step1-step5 产物，不做任何网络请求；统计口径以 step4/step2 源文件为准。
import json
import os
import collections

BASE = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))  # traffic-analysis/
OUT = os.path.join(BASE, "step6")


def load(p):
    with open(os.path.join(BASE, p), encoding="utf-8") as f:
        return json.load(f)


vuln = load("step4/vuln_analysis.json")
secrets = load("step4/secrets_report.json")
risk = load("step4/risk_matrix.json")
vals = load("step5/validation_cases.json")
api = load("step2/api_endpoints.json")
http = load("step2/http_endpoints.json")
crypto3 = load("step3/crypto_native_analysis.json")
jni3 = load("step3/jni_analysis.json")

# ---------- 状态映射（PoC 实测 PASS -> verified；纯静态 -> static_confirmed；在线未授权 -> needs_online_validation）
VERDICT_PASS = {"VULN-001", "VULN-002", "VULN-007", "VULN-012"}  # VAL-001/002/007/012 离线实测 PASS
NEEDS_ONLINE = {"VULN-004", "VULN-021", "VULN-025"}  # 原状态 需验证/仅有线索，依赖在线授权或 native 审计
SELFTEST_NOTE = {  # 有离线演示脚本但非完整 PASS 闭环的说明
    "VULN-003": "VAL-003 离线比特翻转演示脚本 partial；在线注入 blocked_on=no_authorization_online",
    "VULN-005": "VAL-005 selftest 确定性输出已实测；真实样本比对需授权设备 hook 采集，服务端接受度 blocked",
    "VULN-008": "VAL-008 离线 md5 自洽构造演示成立；投递通道 blocked_on=no_authorization_online",
    "VULN-009": "VAL-009 离线 md5 篡改自洽演示成立；清单通道确认 blocked",
    "VULN-010": "VAL-010 离线帧构造演示成立；on-path 注入 blocked",
    "VULN-011": "VAL-011 离线占位私钥重签演示成立；服务端重新计价 blocked",
    "VULN-013": "VAL-013 脚本就绪（授权设备 dry-run，POC_CONFIRM=YES 执行）",
    "VULN-017": "VAL-017 离线被动证据闭环脚本已实测可跑（78 条明文记录扫描）",
    "VULN-020": "VAL-020 静态扫描脚本已实测可跑；命中集需与 step4 人工对照",
}
VAL_BY_VULN = {c["vuln_id"]: c for c in vals["cases"]}

findings = []
for v in vuln["vulnerabilities"]:
    vid = v["id"]
    if vid in VERDICT_PASS:
        status = "verified"
        vnote = f"PoC {VAL_BY_VULN[vid]['id']} 离线实测 PASS：{VAL_BY_VULN[vid]['expected_result']}"
    elif vid in NEEDS_ONLINE:
        status = "needs_online_validation"
        vnote = "；".join(v.get("validation_needed") or ["需在线授权验证"])
    else:
        status = "static_confirmed"
        vnote = SELFTEST_NOTE.get(vid, "静态证据闭环（guardian 级别 %s）" % v.get("guardian_level"))
    findings.append({
        "id": vid,
        "title": v["title"],
        "severity": v["severity"],
        "category": v["category"],
        "status": status,
        "status_source": {"phase4_status": v["status"], "guardian_level": v.get("guardian_level"),
                          "validation_case": (VAL_BY_VULN.get(vid) or {}).get("id"),
                          "validation_note": vnote},
        "phase": "Phase 4（溯源 Phase 1-3）",
        "owasp": v.get("owasp_mapping"),
        "cwe": v.get("cwe"),
        "evidence": v["evidence"],
        "impact": v["impact"],
        "description": v["description"],
        "exploitation_conditions": v.get("exploitation_conditions"),
        "attack_path": v.get("attack_path"),
        "remediation": v["remediation"],
        "self_build_note": "自研服务端/客户端不应照抄该设计：" + v["remediation"],
        "validation_needed": v.get("validation_needed") or [],
    })

summary = vuln["scan_summary"]["by_severity"]
out = {
    "target": vuln["scan_summary"]["target"],
    "generated_by": "phase_6 reporter (offline aggregation only, 无网络请求)",
    "report_type": "full",
    "include_appendix": True,
    "summary": {
        "total_findings": len(findings),
        "critical": summary["critical"],
        "high": summary["high"],
        "medium": summary["medium"],
        "low": summary["low"],
        "info": summary["info"],
        "by_category": risk["by_category"],
        "by_status_phase4": vuln["scan_summary"]["by_status"],
        "by_status_phase6": dict(collections.Counter(f["status"] for f in findings)),
        "supplementary": {
            "crypto_findings": len(vuln["crypto_findings"]),
            "signature_findings": len(vuln["signature_findings"]),
            "crypto_restorations": len(vuln["crypto_restoration"]),
            "packet_risks": len(vuln["packet_risks"]),
            "secrets_findings": secrets["scan_summary"]["total_findings"],
            "jsbridge_risks": 5,
            "srs_endpoints_traffic_matched": api["scan_summary"]["matched"] + api["scan_summary"]["traffic_only"],
            "total_endpoints": api["scan_summary"]["total_endpoints"],
        },
    },
    "findings": findings,
    "crypto_findings": vuln["crypto_findings"],
    "signature_findings": vuln["signature_findings"],
    "crypto_restorations": vuln["crypto_restoration"],
    "packet_risks": vuln["packet_risks"],
    "secrets_findings": secrets["findings"],
}
with open(os.path.join(OUT, "findings.json"), "w", encoding="utf-8") as f:
    json.dump(out, f, ensure_ascii=False, indent=2)
print("findings.json written:", len(findings), "findings")

# ---------- api_endpoints_full.md
L = []
A = L.append
A("# 后端 API 全景明细（全量）—— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4\n")
A("数据源：`step2/api_endpoints.json`（159 端点：111 SRS TCP 消息 + 48 HTTPS SNI 域）、"
  "`step2/http_endpoints.json`（78 条明文 HTTP / 14 条 code_only HTTP）、"
  "`step2/protocol_index_full.json`（849 二进制协议 + 743 protobuf 消息 + 94 游戏 cmdid）。\n")
A("## 1. SRS TCP 帧格式\n")
sf = api["scan_summary"]["srs_frame_format"]
for k, v in sf.items():
    A(f"- **{k}**：{v}")
A("\n握手链：c2s xy=1(len=4, 魔数 fa60a522，服务端回显) → c2s xy=3(len=0) → s2c xy=4(len=17/33，密钥材料下发)"
  " → c2s xy=5 PlayerConnect → s2c xy=6 PlayerData。\n")
A("## 2. SRS 服务端拓扑\n")
A("| 地址 | 角色 | 出现场景 |")
A("|---|---|---|")
for s in api["srs_servers"]:
    A(f"| `{s['addr']}` | {s['role']} | {','.join(s['scenes'])} |")
A("\n## 3. SRS 消息端点全量表（111 条，流量确认）\n")
A("图例：dir 为 c2s/s2c 帧数；加密列 c2s 全方向 XOR 流（AES-256-CFB128 固定 IV 逐帧重置），"
  "s2c 仅 proc=0 加密、proc≠0 明文；encrypted 表示该方向实测为密文。\n")
A("| ID | proc | xy | 模块 | 消息 | 方向(c2s/s2c) | 帧数 | s2c 加密 | 匹配 |")
A("|---|---|---|---|---|---|---|---|---|")
for e in api["endpoints"]:
    if e["channel"] != "srs_tcp":
        continue
    be = e.get("body_encryption") or {}
    dirs = e.get("directions") or {}
    dtxt = "/".join(f"{k}={v}" for k, v in dirs.items())
    A(f"| {e['id']} | {e['processid']} | {e['xy_id']} | {e['module']} | {e.get('name') or '—(未命名, traffic_only)'} "
      f"| {dtxt} | {e.get('frame_count')} | {be.get('s2c', '-')} | {e.get('match_status')} |")
A("\n## 4. 金币场连续调度语义（实测结论）\n")
fa = load("step2/field_alignments.json")
A(fa["gold_dispatch_semantics"]["conclusion"] + "\n")
A("证据：" + fa["gold_dispatch_semantics"]["evidence"] + "\n")
A("## 5. protobuf 通道\n")
A("- proc=1147（roommatch_cli，帧 flag=0x80）：PlayerJoinRequest/Reply、GameNotify、CostNotify、GoldPlayerInfoRequest/Reply 等；"
  "消息体 protobuf 明文，定义见 `protocol_index_full.json protobuf_messages`（743 条）。")
A("- proc=116（nyx_client，newgold 亲友圈）：含未收录消息 (116,280)/(116,561)/(116,562)/(116,563)，"
  "同样为 protobuf 明文，代码侧未检索到命名定义。\n")
A("## 6. HTTPS 域名全景（48 个 SNI）\n")
A("| 域名 | 分类 | 场景 | 流数 | 字节 | 说明 |")
A("|---|---|---|---|---|---|")
for v in http["https_by_sni"]:
    A(f"| {v['domain']} | {v['category']} | {','.join(s.split('_')[0] for s in v['scenes'])} "
      f"| {v['flow_count']} | {v['bytes']} | {v['note'].replace('|','/')} |")
A("\n## 7. 手机验证码/登录 HTTP 端点组（HTTPS 密文，参数与签名已从 Lua 完整恢复）\n")
vce = http["verification_code_endpoint"]
A(f"- 结论：{vce['conclusion']}")
for k, v in vce["urls"].items():
    A(f"- {k}：`{v}`")
A(f"- 方法/body：{vce['method']}")
A(f"- 参数：{', '.join(vce['params'])}")
A(f"- 签名逻辑：`{vce['signature_logic']}`\n")
A("## 8. 仅代码存在、抓包未出现的 HTTP 端点（14 条）\n")
for e in http["code_only_http"]:
    A(f"- `{e['url']}` — {e['file']}:{e['line']} — {e['note']}")
A("\n## 9. 明文 HTTP（78 条，全部第三方 SDK）\n")
A("明细见 `step2/http_endpoints.json plaintext_http`。构成：个推配置、搜狐 cityjson、微信 mmtls、"
  "快手直播 SDK HTTPDNS 群；目标 App 自身业务接口正式包全部走 HTTPS，抓包中无明文业务请求。\n")
A("## 10. 仅代码存在的 SRS 二进制消息（301 条，按模块汇总）\n")
mods = collections.Counter(e.get("module", "?") for e in api["code_only_group"])
A("| 模块 | 条数 |")
A("|---|---|")
for m, c in mods.most_common():
    A(f"| {m} | {c} |")
A("\n要点：DispatchProtocol（proc147，调度队列 4-8）为旧金币调度链路，已被 MatchLinkProtocol（proc1006）取代，"
  "全场景 0 帧；完整清单见 `step2/api_endpoints.json code_only_group`。\n")
with open(os.path.join(OUT, "api_endpoints_full.md"), "w", encoding="utf-8") as f:
    f.write("\n".join(L))
print("api_endpoints_full.md written")

# ---------- secrets_full.md
L = []
A = L.append
A("# 敏感信息全量明细 —— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4\n")
A("数据源：`step4/secrets_report.json`（16 条裁决后结论；原始命中 `step1/raw_secrets.json` 3477 real / 13 critical，"
  "其中 6+ 条为第三方库常量/公开 CA 误报已剔除）。分析方式：纯静态离线，未做任何密钥有效性验证。\n")
A(f"分级统计：critical {secrets['scan_summary']['by_severity']['critical']} / "
  f"high {secrets['scan_summary']['by_severity']['high']} / "
  f"medium {secrets['scan_summary']['by_severity']['medium']} / "
  f"low {secrets['scan_summary']['by_severity']['low']}\n")
A("| ID | 类别 | 子类型 | 级别 | 值(掩码) | 位置 | 说明 |")
A("|---|---|---|---|---|---|---|")
for s in secrets["findings"]:
    loc = f"{s['source_file']}:{s['source_line']}" if s.get("source_line") else s["source_file"]
    ph = "（占位/低置信度）" if s.get("is_placeholder") else ""
    A(f"| {s['id']} | {s['category']} | {s['sub_type']} | {s['severity']} | `{s['masked_value']}`{ph} "
      f"| {loc} | {s['risk_note'].replace('|','/')} |")
A("\n说明：`is_placeholder=true` 的条目为疑似占位值/示例值或已甄别的误报聚合，仅低置信度保留。")
with open(os.path.join(OUT, "secrets_full.md"), "w", encoding="utf-8") as f:
    f.write("\n".join(L))
print("secrets_full.md written")

# ---------- native_findings_full.md
L = []
A = L.append
A("# Native / JNI 全量明细 —— 浙江游戏大厅 com.xm.zjgamecenter v1.5.4\n")
A("数据源：`step3/jni_analysis.json`、`step3/crypto_native_analysis.json`。"
  "分析方式：纯静态离线（llvm-readelf dynsym + llvm-objdump 反汇编 + strings），dynsym 完整未剥离，"
  "全部 so 符号偏移已逐符号复核一致（见 crypto_native_analysis.json symbol_offset_reverification）。\n")
A("## 1. SO 清单（10 个，双 ABI arm64-v8a/armeabi-v7a）\n")
A("| SO | dynsym FUNC | Java_ 导出 | 角色 |")
A("|---|---|---|---|")
for lib in jni3["libraries"]:
    A(f"| {lib['library']} | {lib.get('dynsym_func','-')} | {lib.get('java_export_count','-')} | {lib['role']} |")
A("\n## 2. JNI 绑定（13 组展开 + 引擎标准桥）\n")
for b in jni3["jni_bindings"]:
    A(f"### {b['id']} `{b['java_method']}`")
    A(f"- SO：{b['library']}；native 符号：{b['native_symbol']}")
    A(f"- Java 入口：{b['source_file']}:{b.get('source_line', 0)}")
    A(f"- 用途：{b['purpose']}")
    if b.get("crypto_algorithm_candidate") and b["crypto_algorithm_candidate"] != "none":
        A(f"- 加密候选：{b['crypto_algorithm_candidate']}")
    if b.get("note"):
        A(f"- 备注：{b['note']}")
    A("")
A("## 3. Lua→native 业务主通道（tolua 绑定，非 JNI）\n")
for b in jni3["lua_native_bindings"]["bindings"]:
    A(f"- **{b['lua_class']}** → {b['native']}；方法：{b['methods']}；证据：{b['evidence']}")
A("\n## 4. 加密体系 native 发现（CRYPTO-001~005）\n")
for c in crypto3["crypto_findings"]:
    A(f"### {c['id']} {c['name']}（{c['algorithm']}，severity={c['severity']}，confidence={c['confidence']}）")
    A(f"- native 入口：{c['native_entry']}")
    A(f"- 密钥来源：{c['key_source']}；派生：{c['key_derivation']}")
    if c.get("iv_source") and c["iv_source"] != "none":
        A(f"- IV：{c['iv_source']}；{c['iv_derivation']}")
    A(f"- 数据流：{c['data_flow_summary']}")
    A(f"- 验证：{c.get('verification', '—')}")
    if c.get("runtime_validation_needed"):
        A(f"- 待运行时验证：{c.get('runtime_validation_note', '是')}")
    A(f"- 修复方向：{c['remediation']}")
    A("")
A("## 5. SRS 帧格式静态佐证与流量加密结论\n")
fh = crypto3["network_frame_hints"]
A(f"- 帧头：{fh['frame_format_corroboration']['header_size']} 字节；magic {fh['frame_format_corroboration']['magic_constant']}；"
  f"校验和：{fh['frame_format_corroboration']['checksum']}")
for ev in fh["frame_format_corroboration"]["static_evidence"]:
    A(f"  - {ev}")
A(f"- 帧加密结论：{fh['frame_crypto']['conclusion']}")
A(f"- 逐帧标志：{fh['frame_crypto']['per_frame_flag']}")
A(f"- 密钥协商消息族：{' / '.join(fh['frame_crypto']['key_negotiation_messages'])}")
A(f"- 默认 AES key：{fh['frame_crypto']['default_aes_key_hex@0x11f55ec']}")
A(f"- 默认 AES IV：{fh['frame_crypto']['default_aes_iv_hex@0x11f560c']}")
A(f"- 解密配方：{fh['frame_crypto']['decrypt_recipe_hint']}\n")
A("## 6. native 防护逻辑（反调试/签名校验/风控）\n")
for p in jni3["native_protections"]:
    A(f"- **{p['type']}**（{p['library']}）：{p['assessment']}（证据：{p['evidence'].get('file')} / {p['evidence'].get('line_or_symbol')}）")
A("\n注：libsgcore.so（阿里聚安全，仅 4 导出）为混淆风控黑盒，ptrace/TracerPid/frida/xposed 关键词在 4 个关键 so 静态零命中，"
  "不代表运行时无检测，标记需运行时复核。")
with open(os.path.join(OUT, "native_findings_full.md"), "w", encoding="utf-8") as f:
    f.write("\n".join(L))
print("native_findings_full.md written")

# ---------- 一致性自检
errs = []
if out["summary"]["total_findings"] != vuln["scan_summary"]["total_vulnerabilities"]:
    errs.append("findings 总数与 vuln_analysis 不一致")
if (out["summary"]["critical"], out["summary"]["high"], out["summary"]["medium"], out["summary"]["low"]) != \
   (risk["summary"]["critical"], risk["summary"]["high"], risk["summary"]["medium"], risk["summary"]["low"]):
    errs.append("分级统计与 risk_matrix 不一致")
srs_rows = sum(1 for e in api["endpoints"] if e["channel"] == "srs_tcp")
sni_rows = len(http["https_by_sni"])
if srs_rows + sni_rows != api["scan_summary"]["total_endpoints"]:
    errs.append(f"端点覆盖 {srs_rows}+{sni_rows} != {api['scan_summary']['total_endpoints']}")
if len(secrets["findings"]) != secrets["scan_summary"]["total_findings"]:
    errs.append("secrets 条目不齐")
if errs:
    print("CONSISTENCY ERRORS:", errs)
    raise SystemExit(1)
print("consistency OK: srs=%d sni=%d secrets=%d vulns=%d" % (srs_rows, sni_rows, len(secrets["findings"]), len(findings)))
