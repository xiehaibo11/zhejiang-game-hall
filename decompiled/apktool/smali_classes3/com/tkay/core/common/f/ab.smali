.class public final Lcom/tkay/core/common/f/ab;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field A:[Ljava/lang/String;

.field B:[Ljava/lang/String;

.field C:[Ljava/lang/String;

.field D:[Ljava/lang/String;

.field E:[Ljava/lang/String;

.field F:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field G:[Ljava/lang/String;

.field H:[Ljava/lang/String;

.field I:Ljava/lang/String;

.field J:Ljava/lang/String;

.field K:Ljava/lang/String;

.field L:Ljava/lang/String;

.field M:Ljava/lang/String;

.field N:Ljava/lang/String;

.field O:Ljava/lang/String;

.field P:Ljava/lang/String;

.field Q:Ljava/lang/String;

.field R:Ljava/lang/String;

.field S:Ljava/lang/String;

.field T:Ljava/lang/String;

.field U:Ljava/lang/String;

.field V:Ljava/lang/String;

.field W:Ljava/lang/String;

.field X:Ljava/lang/String;

.field Y:Ljava/lang/String;

.field Z:Ljava/lang/String;

.field a:Ljava/lang/String;

.field aa:Ljava/lang/String;

.field ab:Ljava/lang/String;

.field ac:Ljava/lang/String;

.field ad:Ljava/lang/String;

.field ae:Ljava/lang/String;

.field af:Ljava/lang/String;

.field ag:Ljava/lang/String;

.field ah:Ljava/lang/String;

.field ai:Ljava/lang/String;

.field aj:Ljava/lang/String;

.field ak:Ljava/lang/String;

.field al:Ljava/lang/String;

.field am:Ljava/lang/String;

.field an:Ljava/lang/String;

.field ao:[Ljava/lang/String;

.field ap:Ljava/lang/String;

.field b:[Ljava/lang/String;

.field c:[Ljava/lang/String;

.field d:[Ljava/lang/String;

.field e:[Ljava/lang/String;

.field f:[Ljava/lang/String;

.field g:[Ljava/lang/String;

.field h:[Ljava/lang/String;

.field i:[Ljava/lang/String;

.field j:[Ljava/lang/String;

.field k:[Ljava/lang/String;

.field l:[Ljava/lang/String;

.field m:[Ljava/lang/String;

.field n:[Ljava/lang/String;

.field o:[Ljava/lang/String;

.field p:[Ljava/lang/String;

.field q:[Ljava/lang/String;

.field r:[Ljava/lang/String;

.field s:[Ljava/lang/String;

.field t:[Ljava/lang/String;

.field u:[Ljava/lang/String;

.field v:[Ljava/lang/String;

.field w:[Ljava/lang/String;

.field x:[Ljava/lang/String;

.field y:[Ljava/lang/String;

.field z:[Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final a(Ljava/lang/String;)Lcom/tkay/core/common/f/ab;
    .locals 7

    const/4 v0, 0x0

    .line 122
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    .line 125
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 126
    new-instance p0, Lcom/tkay/core/common/f/ab;

    invoke-direct {p0}, Lcom/tkay/core/common/f/ab;-><init>()V

    const-string v2, "ks"

    .line 127
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->a:Ljava/lang/String;

    const-string v2, "nurl"

    .line 128
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->b:[Ljava/lang/String;

    const-string v2, "imp"

    .line 129
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->c:[Ljava/lang/String;

    const-string v2, "click"

    .line 130
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->d:[Ljava/lang/String;

    const-string v2, "vstart"

    .line 131
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->e:[Ljava/lang/String;

    const-string v2, "v25"

    .line 132
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->f:[Ljava/lang/String;

    const-string v2, "v50"

    .line 133
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->g:[Ljava/lang/String;

    const-string v2, "v75"

    .line 134
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->h:[Ljava/lang/String;

    const-string v2, "v100"

    .line 135
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->i:[Ljava/lang/String;

    const-string v2, "vpaused"

    .line 136
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->j:[Ljava/lang/String;

    const-string v2, "vclick"

    .line 137
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->k:[Ljava/lang/String;

    const-string v2, "vmute"

    .line 138
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->l:[Ljava/lang/String;

    const-string v2, "vunmute"

    .line 139
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->m:[Ljava/lang/String;

    const-string v2, "ec_show"

    .line 140
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->n:[Ljava/lang/String;

    const-string v2, "ec_close"

    .line 141
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->o:[Ljava/lang/String;

    const-string v2, "apk_dl_star"

    .line 142
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->p:[Ljava/lang/String;

    const-string v2, "apk_dl_end"

    .line 143
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->q:[Ljava/lang/String;

    const-string v2, "apk_install"

    .line 144
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->r:[Ljava/lang/String;

    const-string v2, "vresumed"

    .line 149
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->s:[Ljava/lang/String;

    const-string v2, "vskip"

    .line 150
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->t:[Ljava/lang/String;

    const-string v2, "vfail"

    .line 151
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->u:[Ljava/lang/String;

    const-string v2, "apk_start_install"

    .line 152
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->v:[Ljava/lang/String;

    const-string v2, "dp_start"

    .line 153
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->w:[Ljava/lang/String;

    const-string v2, "dp_succ"

    .line 154
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->x:[Ljava/lang/String;

    const-string v2, "app_install"

    .line 155
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->y:[Ljava/lang/String;

    const-string v2, "app_uninstall"

    .line 156
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->z:[Ljava/lang/String;

    const-string v2, "app_unknow"

    .line 157
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->A:[Ljava/lang/String;

    const-string v2, "dp_inst_fail"

    .line 162
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->C:[Ljava/lang/String;

    const-string v2, "dp_uninst_fail"

    .line 163
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->B:[Ljava/lang/String;

    const-string v2, "vd_succ"

    .line 164
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->D:[Ljava/lang/String;

    const-string v2, "vrewarded"

    .line 165
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->E:[Ljava/lang/String;

    const-string v2, "v_p_tracking"

    .line 166
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 168
    new-instance v3, Ljava/util/HashMap;

    invoke-direct {v3}, Ljava/util/HashMap;-><init>()V

    iput-object v3, p0, Lcom/tkay/core/common/f/ab;->F:Ljava/util/Map;

    const/4 v3, 0x0

    .line 169
    :goto_0
    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 170
    invoke-virtual {v2, v3}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    const-string v5, "play_sec"

    .line 171
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    const-string v6, "list"

    .line 172
    invoke-virtual {v4, v6}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v4

    .line 173
    invoke-static {v4}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v4

    .line 174
    iget-object v6, p0, Lcom/tkay/core/common/f/ab;->F:Ljava/util/Map;

    invoke-static {v5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-interface {v6, v5, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    const-string v2, "load_success"

    .line 181
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->G:[Ljava/lang/String;

    const-string v2, "load_fail"

    .line 182
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->H:[Ljava/lang/String;

    const-string v2, "tp_nurl"

    .line 185
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->I:Ljava/lang/String;

    const-string v2, "tp_imp"

    .line 186
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->J:Ljava/lang/String;

    const-string v2, "tp_click"

    .line 187
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->K:Ljava/lang/String;

    const-string v2, "tp_vstart"

    .line 188
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->L:Ljava/lang/String;

    const-string v2, "tp_v25"

    .line 189
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->M:Ljava/lang/String;

    const-string v2, "tp_v50"

    .line 190
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->N:Ljava/lang/String;

    const-string v2, "tp_v75"

    .line 191
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->O:Ljava/lang/String;

    const-string v2, "tp_v100"

    .line 192
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->P:Ljava/lang/String;

    const-string v2, "tp_vpaused"

    .line 193
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->Q:Ljava/lang/String;

    const-string v2, "tp_vclick"

    .line 194
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->R:Ljava/lang/String;

    const-string v2, "tp_vmute"

    .line 195
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->S:Ljava/lang/String;

    const-string v2, "tp_vunmute"

    .line 196
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->T:Ljava/lang/String;

    const-string v2, "tp_ec_show"

    .line 197
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->U:Ljava/lang/String;

    const-string v2, "tp_ec_close"

    .line 198
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->V:Ljava/lang/String;

    const-string v2, "tp_apk_dl_star"

    .line 199
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->W:Ljava/lang/String;

    const-string v2, "tp_apk_dl_end"

    .line 200
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->X:Ljava/lang/String;

    const-string v2, "tp_apk_install"

    .line 201
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->Y:Ljava/lang/String;

    const-string v2, "tp_vresumed"

    .line 206
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->Z:Ljava/lang/String;

    const-string v2, "tp_vskip"

    .line 207
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->aa:Ljava/lang/String;

    const-string v2, "tp_vfail"

    .line 208
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ab:Ljava/lang/String;

    const-string v2, "tp_apk_start_install"

    .line 209
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ac:Ljava/lang/String;

    const-string v2, "tp_dp_start"

    .line 210
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ad:Ljava/lang/String;

    const-string v2, "tp_dp_succ"

    .line 211
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ae:Ljava/lang/String;

    const-string v2, "tp_app_install"

    .line 212
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->af:Ljava/lang/String;

    const-string v2, "tp_app_uninstall"

    .line 213
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ag:Ljava/lang/String;

    const-string v2, "tp_app_unknow"

    .line 214
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ah:Ljava/lang/String;

    const-string v2, "tp_dp_inst_fail"

    .line 219
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->aj:Ljava/lang/String;

    const-string v2, "tp_dp_uninst_fail"

    .line 220
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ai:Ljava/lang/String;

    const-string v2, "tp_vd_succ"

    .line 221
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ak:Ljava/lang/String;

    const-string v2, "tp_vrewarded"

    .line 222
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->al:Ljava/lang/String;

    const-string v2, "tp_load_success"

    .line 227
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->am:Ljava/lang/String;

    const-string v2, "tp_load_fail"

    .line 228
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->an:Ljava/lang/String;

    const-string v2, "vready"

    .line 231
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/h;->a(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ab;->ao:[Ljava/lang/String;

    const-string v2, "tp_ready"

    .line 232
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/core/common/f/ab;->ap:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 236
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    return-object v0
.end method


# virtual methods
.method public final A()Ljava/lang/String;
    .locals 1

    .line 363
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->J:Ljava/lang/String;

    return-object v0
.end method

.method public final B()Ljava/lang/String;
    .locals 1

    .line 367
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->K:Ljava/lang/String;

    return-object v0
.end method

.method public final C()Ljava/lang/String;
    .locals 1

    .line 371
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->L:Ljava/lang/String;

    return-object v0
.end method

.method public final D()Ljava/lang/String;
    .locals 1

    .line 375
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->M:Ljava/lang/String;

    return-object v0
.end method

.method public final E()Ljava/lang/String;
    .locals 1

    .line 379
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->N:Ljava/lang/String;

    return-object v0
.end method

.method public final F()Ljava/lang/String;
    .locals 1

    .line 383
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->O:Ljava/lang/String;

    return-object v0
.end method

.method public final G()Ljava/lang/String;
    .locals 1

    .line 387
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->P:Ljava/lang/String;

    return-object v0
.end method

.method public final H()Ljava/lang/String;
    .locals 1

    .line 391
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->Q:Ljava/lang/String;

    return-object v0
.end method

.method public final I()Ljava/lang/String;
    .locals 1

    .line 395
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->R:Ljava/lang/String;

    return-object v0
.end method

.method public final J()Ljava/lang/String;
    .locals 1

    .line 399
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->S:Ljava/lang/String;

    return-object v0
.end method

.method public final K()Ljava/lang/String;
    .locals 1

    .line 403
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->T:Ljava/lang/String;

    return-object v0
.end method

.method public final L()Ljava/lang/String;
    .locals 1

    .line 407
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->U:Ljava/lang/String;

    return-object v0
.end method

.method public final M()Ljava/lang/String;
    .locals 1

    .line 411
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->V:Ljava/lang/String;

    return-object v0
.end method

.method public final N()Ljava/lang/String;
    .locals 1

    .line 415
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->W:Ljava/lang/String;

    return-object v0
.end method

.method public final O()Ljava/lang/String;
    .locals 1

    .line 419
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->X:Ljava/lang/String;

    return-object v0
.end method

.method public final P()Ljava/lang/String;
    .locals 1

    .line 423
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->Y:Ljava/lang/String;

    return-object v0
.end method

.method public final Q()[Ljava/lang/String;
    .locals 1

    .line 427
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->s:[Ljava/lang/String;

    return-object v0
.end method

.method public final R()[Ljava/lang/String;
    .locals 1

    .line 431
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->t:[Ljava/lang/String;

    return-object v0
.end method

.method public final S()[Ljava/lang/String;
    .locals 1

    .line 435
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->u:[Ljava/lang/String;

    return-object v0
.end method

.method public final T()[Ljava/lang/String;
    .locals 1

    .line 439
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->v:[Ljava/lang/String;

    return-object v0
.end method

.method public final U()[Ljava/lang/String;
    .locals 1

    .line 444
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->w:[Ljava/lang/String;

    return-object v0
.end method

.method public final V()[Ljava/lang/String;
    .locals 1

    .line 448
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->x:[Ljava/lang/String;

    return-object v0
.end method

.method public final W()[Ljava/lang/String;
    .locals 1

    .line 452
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->y:[Ljava/lang/String;

    return-object v0
.end method

.method public final X()[Ljava/lang/String;
    .locals 1

    .line 456
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->z:[Ljava/lang/String;

    return-object v0
.end method

.method public final Y()[Ljava/lang/String;
    .locals 1

    .line 460
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->A:[Ljava/lang/String;

    return-object v0
.end method

.method public final Z()Ljava/lang/String;
    .locals 1

    .line 465
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->Z:Ljava/lang/String;

    return-object v0
.end method

.method public final a([Ljava/lang/String;)V
    .locals 0

    .line 242
    iput-object p1, p0, Lcom/tkay/core/common/f/ab;->d:[Ljava/lang/String;

    return-void
.end method

.method public final a()[Ljava/lang/String;
    .locals 1

    .line 258
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->G:[Ljava/lang/String;

    return-object v0
.end method

.method public final aa()Ljava/lang/String;
    .locals 1

    .line 469
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->aa:Ljava/lang/String;

    return-object v0
.end method

.method public final ab()Ljava/lang/String;
    .locals 1

    .line 473
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ab:Ljava/lang/String;

    return-object v0
.end method

.method public final ac()Ljava/lang/String;
    .locals 1

    .line 477
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ac:Ljava/lang/String;

    return-object v0
.end method

.method public final ad()Ljava/lang/String;
    .locals 1

    .line 481
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ad:Ljava/lang/String;

    return-object v0
.end method

.method public final ae()Ljava/lang/String;
    .locals 1

    .line 485
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ae:Ljava/lang/String;

    return-object v0
.end method

.method public final af()Ljava/lang/String;
    .locals 1

    .line 489
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->af:Ljava/lang/String;

    return-object v0
.end method

.method public final ag()Ljava/lang/String;
    .locals 1

    .line 493
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ag:Ljava/lang/String;

    return-object v0
.end method

.method public final ah()Ljava/lang/String;
    .locals 1

    .line 497
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ah:Ljava/lang/String;

    return-object v0
.end method

.method public final ai()Ljava/lang/String;
    .locals 1

    .line 501
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ai:Ljava/lang/String;

    return-object v0
.end method

.method public final aj()Ljava/lang/String;
    .locals 1

    .line 505
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->aj:Ljava/lang/String;

    return-object v0
.end method

.method public final ak()Ljava/lang/String;
    .locals 1

    .line 509
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ak:Ljava/lang/String;

    return-object v0
.end method

.method public final al()Ljava/lang/String;
    .locals 1

    .line 513
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->al:Ljava/lang/String;

    return-object v0
.end method

.method public final am()Ljava/lang/String;
    .locals 1

    .line 517
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->am:Ljava/lang/String;

    return-object v0
.end method

.method public final an()Ljava/lang/String;
    .locals 1

    .line 521
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->an:Ljava/lang/String;

    return-object v0
.end method

.method public final ao()[Ljava/lang/String;
    .locals 1

    .line 525
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ao:[Ljava/lang/String;

    return-object v0
.end method

.method public final ap()Ljava/lang/String;
    .locals 1

    .line 529
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->ap:Ljava/lang/String;

    return-object v0
.end method

.method public final b([Ljava/lang/String;)V
    .locals 0

    .line 246
    iput-object p1, p0, Lcom/tkay/core/common/f/ab;->p:[Ljava/lang/String;

    return-void
.end method

.method public final b()[Ljava/lang/String;
    .locals 1

    .line 262
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->H:[Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 267
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final c([Ljava/lang/String;)V
    .locals 0

    .line 250
    iput-object p1, p0, Lcom/tkay/core/common/f/ab;->q:[Ljava/lang/String;

    return-void
.end method

.method public final d([Ljava/lang/String;)V
    .locals 0

    .line 254
    iput-object p1, p0, Lcom/tkay/core/common/f/ab;->r:[Ljava/lang/String;

    return-void
.end method

.method public final d()[Ljava/lang/String;
    .locals 1

    .line 271
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->b:[Ljava/lang/String;

    return-object v0
.end method

.method public final e()[Ljava/lang/String;
    .locals 1

    .line 275
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->c:[Ljava/lang/String;

    return-object v0
.end method

.method public final f()[Ljava/lang/String;
    .locals 1

    .line 279
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->d:[Ljava/lang/String;

    return-object v0
.end method

.method public final g()[Ljava/lang/String;
    .locals 1

    .line 283
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->e:[Ljava/lang/String;

    return-object v0
.end method

.method public final h()[Ljava/lang/String;
    .locals 1

    .line 287
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->f:[Ljava/lang/String;

    return-object v0
.end method

.method public final i()[Ljava/lang/String;
    .locals 1

    .line 291
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->g:[Ljava/lang/String;

    return-object v0
.end method

.method public final j()[Ljava/lang/String;
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->h:[Ljava/lang/String;

    return-object v0
.end method

.method public final k()[Ljava/lang/String;
    .locals 1

    .line 299
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->i:[Ljava/lang/String;

    return-object v0
.end method

.method public final l()[Ljava/lang/String;
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->j:[Ljava/lang/String;

    return-object v0
.end method

.method public final m()[Ljava/lang/String;
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->k:[Ljava/lang/String;

    return-object v0
.end method

.method public final n()[Ljava/lang/String;
    .locals 1

    .line 311
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->l:[Ljava/lang/String;

    return-object v0
.end method

.method public final o()[Ljava/lang/String;
    .locals 1

    .line 315
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->m:[Ljava/lang/String;

    return-object v0
.end method

.method public final p()[Ljava/lang/String;
    .locals 1

    .line 319
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->n:[Ljava/lang/String;

    return-object v0
.end method

.method public final q()[Ljava/lang/String;
    .locals 1

    .line 323
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->o:[Ljava/lang/String;

    return-object v0
.end method

.method public final r()[Ljava/lang/String;
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->p:[Ljava/lang/String;

    return-object v0
.end method

.method public final s()[Ljava/lang/String;
    .locals 1

    .line 331
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->q:[Ljava/lang/String;

    return-object v0
.end method

.method public final t()[Ljava/lang/String;
    .locals 1

    .line 335
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->r:[Ljava/lang/String;

    return-object v0
.end method

.method public final u()[Ljava/lang/String;
    .locals 1

    .line 339
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->B:[Ljava/lang/String;

    return-object v0
.end method

.method public final v()[Ljava/lang/String;
    .locals 1

    .line 343
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->C:[Ljava/lang/String;

    return-object v0
.end method

.method public final w()[Ljava/lang/String;
    .locals 1

    .line 347
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->D:[Ljava/lang/String;

    return-object v0
.end method

.method public final x()[Ljava/lang/String;
    .locals 1

    .line 351
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->E:[Ljava/lang/String;

    return-object v0
.end method

.method public final y()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 355
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->F:Ljava/util/Map;

    return-object v0
.end method

.method public final z()Ljava/lang/String;
    .locals 1

    .line 359
    iget-object v0, p0, Lcom/tkay/core/common/f/ab;->I:Ljava/lang/String;

    return-object v0
.end method
