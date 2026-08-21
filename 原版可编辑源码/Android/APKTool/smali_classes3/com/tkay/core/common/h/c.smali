.class public final Lcom/tkay/core/common/h/c;
.super Ljava/lang/Object;


# static fields
.field public static final A:Ljava/lang/String; = "it_src"

.field public static final B:Ljava/lang/String; = "lat"

.field public static final C:Ljava/lang/String; = "lon"

.field public static final D:Ljava/lang/String; = "inst_wx"

.field public static final E:Ljava/lang/String; = "mini_sdk"

.field public static final F:Ljava/lang/String; = "ms_type"

.field public static final G:Ljava/lang/String; = "device_set"

.field public static final H:Ljava/lang/String; = "gdpr_cs"

.field public static final I:Ljava/lang/String; = "abtest_id"

.field public static final J:Ljava/lang/String; = "first_init_time"

.field public static final K:Ljava/lang/String; = "days_from_first_init"

.field public static final L:Ljava/lang/String; = "cs_cl"

.field public static final M:Ljava/lang/String; = "is_ofm"

.field public static final N:Ljava/lang/String; = "app_id"

.field public static final O:Ljava/lang/String; = "api_ver"

.field public static final P:Ljava/lang/String; = "custom"

.field public static final Q:Ljava/lang/String; = "rdid"

.field public static final R:Ljava/lang/String; = "rc"

.field public static final S:Ljava/lang/String; = "data"

.field public static final T:Ljava/lang/String; = "tcp_tk_da_type"

.field public static final U:Ljava/lang/String; = "ofl"

.field public static final V:Ljava/lang/String; = "tcp_rate"

.field public static final W:Ljava/lang/String; = "p"

.field public static final X:Ljava/lang/String; = "p2"

.field public static final Y:Ljava/lang/String; = "sign"

.field public static final Z:Ljava/lang/String; = "common"

.field public static final a:Ljava/lang/String; = "platform"

.field public static final aa:I = 0x1

.field public static final ab:I = 0x2

.field public static final ac:I = 0x3

.field public static final ad:Ljava/lang/String; = "area_type"

.field public static final ae:Ljava/lang/String; = "sp_http"

.field public static final af:Ljava/lang/String; = "os_fw"

.field public static final ag:Ljava/lang/String; = "is_test"

.field public static final ah:Ljava/lang/String; = "mdna_oid"

.field public static final ai:Ljava/lang/String; = "mdna_appkey"

.field public static final aj:Ljava/lang/String; = "mdna_r"

.field public static final ak:Ljava/lang/String; = "user_num"

.field public static final al:Ljava/lang/String; = "cp_device_id"

.field public static final am:Ljava/lang/String; = "cp_pl_id"

.field public static an:I = -0x1

.field public static ao:I = -0x1

.field public static final ap:Ljava/lang/String; = "al_it_apil"

.field public static final aq:Ljava/lang/String; = "wx_data"

.field public static final b:Ljava/lang/String; = "os_vn"

.field public static final c:Ljava/lang/String; = "os_vc"

.field public static final d:Ljava/lang/String; = "package_name"

.field public static final e:Ljava/lang/String; = "app_vn"

.field public static final f:Ljava/lang/String; = "app_vc"

.field public static final g:Ljava/lang/String; = "brand"

.field public static final h:Ljava/lang/String; = "model"

.field public static final i:Ljava/lang/String; = "screen"

.field public static final j:Ljava/lang/String; = "network_type"

.field public static final k:Ljava/lang/String; = "mnc"

.field public static final l:Ljava/lang/String; = "mcc"

.field public static final m:Ljava/lang/String; = "language"

.field public static final n:Ljava/lang/String; = "timezone"

.field public static final o:Ljava/lang/String; = "sdk_ver"

.field public static final p:Ljava/lang/String; = "gp_ver"

.field public static final q:Ljava/lang/String; = "nw_ver"

.field public static final r:Ljava/lang/String; = "ua"

.field public static final s:Ljava/lang/String; = "orient"

.field public static final t:Ljava/lang/String; = "system"

.field public static final u:Ljava/lang/String; = "android_id"

.field public static final v:Ljava/lang/String; = "gaid"

.field public static final w:Ljava/lang/String; = "channel"

.field public static final x:Ljava/lang/String; = "sub_channel"

.field public static final y:Ljava/lang/String; = "upid"

.field public static final z:Ljava/lang/String; = "ps_id"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lorg/json/JSONObject;
    .locals 10

    const-string v0, "a"

    .line 290
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    .line 291
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 292
    invoke-static {v1}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v3

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v3

    const-string v4, ""

    if-eqz v3, :cond_0

    .line 295
    :try_start_0
    invoke-virtual {v3}, Lcom/tkay/core/c/a;->F()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    :cond_0
    move-object v5, v4

    .line 296
    :goto_0
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const/4 v7, 0x1

    if-nez v6, :cond_2

    .line 298
    :try_start_1
    new-instance v6, Lorg/json/JSONObject;

    invoke-direct {v6, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 299
    invoke-virtual {v6, v0}, Lorg/json/JSONObject;->isNull(Ljava/lang/String;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 300
    invoke-virtual {v6, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-ne v0, v7, :cond_1

    goto :goto_1

    :cond_1
    const/4 v0, 0x0

    goto :goto_2

    :catch_0
    :cond_2
    :goto_1
    move v0, v7

    :goto_2
    :try_start_2
    const-string v5, "android_id"

    if-eqz v0, :cond_3

    .line 306
    invoke-static {v1}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    goto :goto_3

    :cond_3
    move-object v0, v4

    :goto_3
    invoke-virtual {v2, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "gaid"

    .line 307
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 308
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    const-string v5, "is_cn_sdk"

    if-eqz v0, :cond_4

    .line 310
    :try_start_3
    invoke-interface {v0, v2, v3}, Lcom/tkay/core/api/IExHandler;->fillRequestData(Lorg/json/JSONObject;Lcom/tkay/core/c/a;)V

    const-string v0, "1"

    .line 311
    invoke-virtual {v2, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_4

    :cond_4
    const-string v0, "0"

    .line 313
    invoke-virtual {v2, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 315
    :goto_4
    invoke-static {v1}, Lcom/tkay/core/common/l/d;->l(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    .line 317
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->r()Landroid/location/Location;

    move-result-object v3

    if-eqz v3, :cond_5

    const-string v5, "lat"

    .line 319
    invoke-virtual {v3}, Landroid/location/Location;->getLatitude()D

    move-result-wide v8

    invoke-virtual {v2, v5, v8, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v5, "lon"

    .line 320
    invoke-virtual {v3}, Landroid/location/Location;->getLongitude()D

    move-result-wide v8

    invoke-virtual {v2, v5, v8, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 323
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->s()Ljava/lang/String;

    move-result-object v3

    .line 324
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_6

    const-string v5, "inst_wx"

    .line 325
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v2, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_6
    const-string v3, "it_src"

    .line 328
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    move-object v4, v0

    :cond_7
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "area_type"

    .line 330
    sget v3, Lcom/tkay/core/common/b/f$d;->a:I

    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2365
    sget v0, Lcom/tkay/core/common/h/c;->an:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    const-string v3, "ms_type"

    const/4 v4, -0x1

    if-eq v0, v4, :cond_8

    .line 2366
    :try_start_4
    sget v0, Lcom/tkay/core/common/h/c;->an:I

    if-lez v0, :cond_c

    .line 2367
    sget v0, Lcom/tkay/core/common/h/c;->an:I

    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_6

    .line 2370
    :cond_8
    invoke-static {v1}, Lcom/tkay/core/common/l/g;->c(Landroid/content/Context;)Z

    move-result v0

    .line 2371
    invoke-static {v1}, Lcom/tkay/core/common/l/g;->b(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_9

    const/4 v5, 0x2

    goto :goto_5

    :cond_9
    move v5, v0

    :goto_5
    if-eqz v0, :cond_a

    if-eqz v1, :cond_a

    const/4 v5, 0x3

    :cond_a
    if-lez v5, :cond_b

    .line 2382
    invoke-virtual {v2, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2383
    :cond_b
    sput v5, Lcom/tkay/core/common/h/c;->an:I

    .line 2386
    :cond_c
    :goto_6
    sget v0, Lcom/tkay/core/common/h/c;->ao:I
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    const-string v1, "mini_sdk"

    if-eq v0, v4, :cond_d

    .line 2387
    :try_start_5
    sget v0, Lcom/tkay/core/common/h/c;->ao:I

    if-ne v0, v7, :cond_f

    .line 2388
    sget v0, Lcom/tkay/core/common/h/c;->ao:I

    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_7

    .line 2390
    :cond_d
    invoke-static {}, Lcom/tkay/core/common/l/g;->c()Z

    move-result v0

    if-ne v0, v7, :cond_e

    .line 2394
    invoke-virtual {v2, v1, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2396
    :cond_e
    sput v0, Lcom/tkay/core/common/h/c;->ao:I

    .line 2401
    :cond_f
    :goto_7
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->I()Lcom/tkay/core/api/ATPrivacyConfig;

    move-result-object v0

    if-eqz v0, :cond_13

    .line 2403
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevGaid()Ljava/lang/String;

    move-result-object v1

    .line 2404
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevImei()Ljava/lang/String;

    move-result-object v3

    .line 2405
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevOaid()Ljava/lang/String;

    move-result-object v0

    .line 2407
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 2409
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_10

    const-string v5, "set_gaid"

    .line 2410
    invoke-virtual {v4, v5, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2412
    :cond_10
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_11

    const-string v1, "set_imei"

    .line 2413
    invoke-virtual {v4, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 2415
    :cond_11
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_12

    const-string v1, "set_oaid"

    .line 2416
    invoke-virtual {v4, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_12
    const-string v0, "device_set"

    .line 2419
    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 337
    :cond_13
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v0
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    :try_start_6
    const-string v1, "user_number"

    .line 339
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_14

    const-string v3, "user_num"

    .line 341
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v4

    invoke-virtual {v2, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :catchall_0
    :cond_14
    :try_start_7
    const-string v1, "user_device_id"

    .line 349
    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_15

    const-string v1, "cp_device_id"

    .line 351
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :catch_1
    :catchall_1
    :cond_15
    return-object v2
.end method

.method public static a(I)Lorg/json/JSONObject;
    .locals 9

    const-string v0, "3"

    .line 172
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/d;->q(Landroid/content/Context;)V

    .line 174
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 175
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    :try_start_0
    const-string v3, "platform"

    const/4 v4, 0x1

    .line 177
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "os_vn"

    .line 178
    invoke-static {}, Lcom/tkay/core/common/l/d;->e()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "os_vc"

    .line 179
    invoke-static {}, Lcom/tkay/core/common/l/d;->d()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "package_name"

    .line 180
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "app_vn"

    .line 181
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "app_vc"

    .line 182
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->h(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "brand"

    .line 183
    invoke-static {}, Lcom/tkay/core/common/l/d;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "model"

    .line 184
    invoke-static {}, Lcom/tkay/core/common/l/d;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "screen"

    .line 185
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "network_type"

    .line 186
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->m(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "mnc"

    .line 187
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "mcc"

    .line 188
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "language"

    .line 189
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "timezone"

    .line 190
    invoke-static {}, Lcom/tkay/core/common/l/d;->c()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "sdk_ver"

    .line 191
    invoke-static {}, Lcom/tkay/core/common/l/g;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "gp_ver"

    .line 192
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->n(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "ua"

    .line 193
    invoke-static {}, Lcom/tkay/core/common/l/d;->i()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "orient"

    .line 194
    invoke-static {v2}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "system"

    .line 195
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 196
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->m()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "channel"

    .line 197
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->m()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 199
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->n()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    const-string v3, "sub_channel"

    .line 200
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->n()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v3, "upid"

    .line 202
    invoke-static {v2}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, ""

    if-eqz v5, :cond_2

    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    :cond_2
    move-object v5, v6

    :goto_0
    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "ps_id"

    .line 204
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v1, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 207
    invoke-static {v2}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v3

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v3

    if-eqz v3, :cond_4

    const-string v5, "abtest_id"

    .line 209
    invoke-virtual {v3}, Lcom/tkay/core/c/a;->A()Ljava/lang/String;

    move-result-object v7

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_3

    move-object v7, v6

    goto :goto_1

    :cond_3
    invoke-virtual {v3}, Lcom/tkay/core/c/a;->A()Ljava/lang/String;

    move-result-object v7

    :goto_1
    invoke-virtual {v1, v5, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v5, "first_init_time"

    .line 212
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->g()J

    move-result-wide v7

    invoke-virtual {v1, v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v5, "days_from_first_init"

    .line 213
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/core/common/b/m;->h()J

    move-result-wide v7

    invoke-virtual {v1, v5, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v5, "gdpr_cs"

    .line 215
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/core/common/b/m;->d()I

    move-result v8

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-static {v2}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/p;->a()I

    move-result v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "cs_cl"

    .line 218
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 221
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->i()I

    move-result v2

    if-ne v2, v4, :cond_5

    const-string v2, "is_ofm"

    .line 222
    invoke-virtual {v1, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 226
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->G()Z

    move-result v2

    if-eqz v2, :cond_9

    invoke-static {}, Lcom/tkay/core/common/b/h;->a()Lcom/tkay/core/common/b/h;

    move-result-object v2

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/b/h;->a(Lcom/tkay/core/c/a;)Z

    move-result v2

    if-eqz v2, :cond_9

    .line 228
    invoke-static {}, Lcom/tkay/core/common/b/h;->a()Lcom/tkay/core/common/b/h;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/h;->b()Ljava/lang/String;

    move-result-object v2

    .line 229
    invoke-static {}, Lcom/tkay/core/common/b/h;->a()Lcom/tkay/core/common/b/h;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/h;->c()Ljava/lang/String;

    move-result-object v3

    .line 230
    invoke-static {}, Lcom/tkay/core/common/b/h;->a()Lcom/tkay/core/common/b/h;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/h;->d()Ljava/lang/String;

    move-result-object v4

    const-string v5, "mdna_oid"

    .line 232
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_6

    goto :goto_2

    :cond_6
    move-object v2, v6

    :goto_2
    invoke-virtual {v1, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "mdna_appkey"

    .line 233
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_7

    goto :goto_3

    :cond_7
    move-object v3, v6

    :goto_3
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "rdid"

    .line 234
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_8

    move-object v6, v4

    :cond_8
    invoke-virtual {v1, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "mdna_r"

    .line 235
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->J()I

    move-result v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 242
    :cond_9
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->B()Z

    move-result v2

    if-eqz v2, :cond_a

    .line 243
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->C()Z

    move-result v2

    if-eqz v2, :cond_c

    const-string v0, "1"

    goto :goto_4

    .line 249
    :cond_a
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->C()Z

    move-result v0

    if-eqz v0, :cond_b

    const-string v0, "2"

    goto :goto_4

    :cond_b
    const-string v0, "4"

    :cond_c
    :goto_4
    const-string v2, "sp_http"

    .line 255
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 261
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v0

    if-eqz v0, :cond_d

    .line 263
    invoke-interface {v0, v1, p0}, Lcom/tkay/core/api/IExHandler;->fillRequestDeviceData(Lorg/json/JSONObject;I)V

    .line 266
    :cond_d
    invoke-static {}, Lcom/tkay/core/common/l/d;->j()Ljava/lang/String;

    move-result-object v0

    .line 267
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_e

    const-string v2, "os_fw"

    .line 268
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_e
    const/4 v0, 0x4

    and-int/2addr p0, v0

    if-ne p0, v0, :cond_f

    .line 273
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object p0

    .line 1384
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object p0

    if-eqz p0, :cond_f

    .line 1386
    invoke-virtual {p0}, Lcom/tkay/core/c/a;->am()Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_f

    const-string v0, "a_c"

    .line 1388
    invoke-virtual {v1, v0, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_f
    return-object v1
.end method

.method public static a(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 1

    .line 445
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/b/m;->d(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p0

    .line 446
    invoke-static {p0}, Lcom/tkay/core/common/h/c;->a(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/util/Map;)Lorg/json/JSONObject;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lorg/json/JSONObject;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    .line 453
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 454
    :try_start_1
    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catchall_0
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 455
    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-eqz v3, :cond_0

    .line 458
    :try_start_2
    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_1
    :cond_1
    move-object v0, v1

    :catchall_2
    :cond_2
    return-object v0
.end method

.method private static a(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 4

    .line 365
    sget v0, Lcom/tkay/core/common/h/c;->an:I

    const-string v1, "ms_type"

    const/4 v2, -0x1

    if-eq v0, v2, :cond_0

    if-lez v0, :cond_4

    .line 367
    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_1

    .line 370
    :cond_0
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->c(Landroid/content/Context;)Z

    move-result v0

    .line 371
    invoke-static {p0}, Lcom/tkay/core/common/l/g;->b(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 v3, 0x2

    goto :goto_0

    :cond_1
    move v3, v0

    :goto_0
    if-eqz v0, :cond_2

    if-eqz p0, :cond_2

    const/4 v3, 0x3

    :cond_2
    if-lez v3, :cond_3

    .line 382
    invoke-virtual {p1, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 383
    :cond_3
    sput v3, Lcom/tkay/core/common/h/c;->an:I

    .line 386
    :cond_4
    :goto_1
    sget p0, Lcom/tkay/core/common/h/c;->ao:I

    const-string v0, "mini_sdk"

    const/4 v1, 0x1

    if-eq p0, v2, :cond_5

    if-ne p0, v1, :cond_7

    .line 388
    invoke-virtual {p1, v0, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    return-void

    .line 390
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/l/g;->c()Z

    move-result p0

    if-ne p0, v1, :cond_6

    .line 394
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 396
    :cond_6
    sput p0, Lcom/tkay/core/common/h/c;->ao:I

    :cond_7
    return-void
.end method

.method public static a(Lorg/json/JSONObject;)V
    .locals 5

    .line 427
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->K()Lcom/tkay/core/common/f/al;

    move-result-object v0

    .line 428
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "has_sdk"

    .line 429
    invoke-virtual {v0}, Lcom/tkay/core/common/f/al;->b()I

    move-result v3

    const/4 v4, 0x1

    if-ne v3, v4, :cond_0

    goto :goto_0

    :cond_0
    const/4 v4, 0x0

    :goto_0
    invoke-virtual {v1, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "sdk_ver"

    .line 430
    invoke-virtual {v0}, Lcom/tkay/core/common/f/al;->c()I

    move-result v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "sdk_api_ver"

    .line 431
    invoke-virtual {v0}, Lcom/tkay/core/common/f/al;->d()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "open_app_id"

    .line 432
    invoke-static {}, Lcom/tkay/core/common/l/d;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "wx_data"

    .line 433
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static b()Lorg/json/JSONObject;
    .locals 1

    .line 440
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v0

    .line 441
    invoke-static {v0}, Lcom/tkay/core/common/h/c;->a(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method private static b(Lorg/json/JSONObject;)V
    .locals 5

    .line 401
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->I()Lcom/tkay/core/api/ATPrivacyConfig;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 403
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevGaid()Ljava/lang/String;

    move-result-object v1

    .line 404
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevImei()Ljava/lang/String;

    move-result-object v2

    .line 405
    invoke-interface {v0}, Lcom/tkay/core/api/ATPrivacyConfig;->getDevOaid()Ljava/lang/String;

    move-result-object v0

    .line 407
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 409
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    const-string v4, "set_gaid"

    .line 410
    invoke-virtual {v3, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 412
    :cond_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "set_imei"

    .line 413
    invoke-virtual {v3, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 415
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "set_oaid"

    .line 416
    invoke-virtual {v3, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v0, "device_set"

    .line 419
    invoke-virtual {p0, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    return-void
.end method
