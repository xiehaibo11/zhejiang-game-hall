.class public Lcom/ss/android/downloadlib/addownload/compliance/df;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/addownload/compliance/df$rg;
    }
.end annotation


# instance fields
.field private rg:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 51
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/downloadlib/addownload/compliance/df$1;)V
    .locals 0

    .line 38
    invoke-direct {p0}, Lcom/ss/android/downloadlib/addownload/compliance/df;-><init>()V

    return-void
.end method

.method public static rg()Lcom/ss/android/downloadlib/addownload/compliance/df;
    .locals 1

    .line 45
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/df$rg;->rg()Lcom/ss/android/downloadlib/addownload/compliance/df;

    move-result-object v0

    return-object v0
.end method

.method private rg(JJLjava/lang/String;)Z
    .locals 9

    const/4 v0, 0x7

    const/4 v1, 0x0

    .line 178
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p5, "package"

    .line 179
    invoke-virtual {v2, p5}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p5

    if-eqz p5, :cond_2

    .line 180
    invoke-virtual {p5}, Lorg/json/JSONObject;->length()I

    move-result v2

    if-nez v2, :cond_0

    goto/16 :goto_1

    .line 184
    :cond_0
    new-instance v2, Lcom/ss/android/downloadlib/addownload/model/df;

    invoke-direct {v2}, Lcom/ss/android/downloadlib/addownload/model/df;-><init>()V

    .line 185
    iput-wide p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->rg:J

    .line 186
    iput-wide p3, v2, Lcom/ss/android/downloadlib/addownload/model/df;->df:J

    const-string p1, "icon_url"

    .line 187
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->pt:Ljava/lang/String;

    const-string p1, "app_name"

    .line 190
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->pp:Ljava/lang/String;

    const-string p1, "package_name"

    .line 191
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->q:Ljava/lang/String;

    const-string p1, "version_name"

    .line 192
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->c:Ljava/lang/String;

    const-string p1, "developer_name"

    .line 193
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->fw:Ljava/lang/String;

    const-string p1, "policy_url"

    .line 194
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v2, Lcom/ss/android/downloadlib/addownload/model/df;->rz:Ljava/lang/String;

    const-string p1, "permissions"

    .line 196
    invoke-virtual {p5, p1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    if-eqz p1, :cond_1

    move p2, v1

    .line 198
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result p5

    if-ge p2, p5, :cond_1

    .line 199
    invoke-virtual {p1, p2}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object p5

    check-cast p5, Lorg/json/JSONObject;

    .line 200
    iget-object v3, v2, Lcom/ss/android/downloadlib/addownload/model/df;->ux:Ljava/util/List;

    new-instance v4, Landroid/util/Pair;

    const-string v5, "permission_name"

    .line 201
    invoke-virtual {p5, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v6, "permission_desc"

    .line 202
    invoke-virtual {p5, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p5

    invoke-direct {v4, v5, p5}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    .line 200
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    .line 206
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg()Lcom/ss/android/downloadlib/addownload/compliance/q;

    move-result-object p1

    invoke-virtual {p1, v2}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg(Lcom/ss/android/downloadlib/addownload/model/df;)V

    .line 207
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg()Lcom/ss/android/downloadlib/addownload/compliance/pt;

    move-result-object v3

    invoke-virtual {v2}, Lcom/ss/android/downloadlib/addownload/model/df;->rg()J

    move-result-wide v4

    iget-object v8, v2, Lcom/ss/android/downloadlib/addownload/model/df;->pt:Ljava/lang/String;

    move-wide v6, p3

    invoke-virtual/range {v3 .. v8}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg(JJLjava/lang/String;)V

    const/4 p1, 0x1

    return p1

    .line 181
    :cond_2
    :goto_1
    invoke-static {v0, p3, p4}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(IJ)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v1

    :catch_0
    move-exception p1

    .line 210
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p2

    const-string p5, "AdLpComplianceManager parseResponse"

    invoke-virtual {p2, p1, p5}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    .line 211
    invoke-static {v0, p3, p4}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(IJ)V

    return v1
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/addownload/compliance/df;JJLjava/lang/String;)Z
    .locals 0

    .line 38
    invoke-direct/range {p0 .. p5}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(JJLjava/lang/String;)Z

    move-result p0

    return p0
.end method


# virtual methods
.method public df()Landroid/app/Activity;
    .locals 2

    .line 234
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg:Ljava/lang/ref/SoftReference;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    const/4 v1, 0x0

    .line 235
    iput-object v1, p0, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg:Ljava/lang/ref/SoftReference;

    return-object v0
.end method

.method public df(J)V
    .locals 2

    .line 218
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/model/c;->pp(J)Lcom/ss/android/downloadlib/addownload/model/pp;

    move-result-object v0

    .line 219
    invoke-static {}, Lcom/ss/android/downloadlib/fw;->rg()Lcom/ss/android/downloadlib/fw;

    move-result-object v1

    iget-object v0, v0, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getDownloadUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/ss/android/downloadlib/fw;->rg(Ljava/lang/String;)Lcom/ss/android/downloadlib/addownload/pp;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    .line 222
    invoke-virtual {v0, p1, p1}, Lcom/ss/android/downloadlib/addownload/pp;->rg(ZZ)V

    goto :goto_0

    :cond_0
    const/16 v0, 0xb

    .line 224
    invoke-static {v0, p1, p2}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(IJ)V

    .line 225
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object p1

    const-string p2, "startDownload handler null"

    invoke-virtual {p1, p2}, Lcom/ss/android/downloadlib/exception/q;->df(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public rg(J)V
    .locals 0

    .line 55
    invoke-static {p1, p2}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(J)V

    return-void
.end method

.method public rg(Landroid/app/Activity;)V
    .locals 1

    .line 230
    new-instance v0, Ljava/lang/ref/SoftReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg:Ljava/lang/ref/SoftReference;

    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadModel;)Z
    .locals 4

    .line 62
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->isAd()Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 65
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ad_lp_show_app_dialog"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_1

    return v1

    .line 68
    :cond_1
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object v0

    if-nez v0, :cond_2

    const/4 p1, 0x0

    goto :goto_0

    :cond_2
    invoke-interface {p1}, Lcom/ss/android/download/api/download/DownloadModel;->getDeepLink()Lcom/ss/android/download/api/model/DeepLink;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/download/api/model/DeepLink;->getWebUrl()Ljava/lang/String;

    move-result-object p1

    .line 69
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    return v1

    .line 72
    :cond_3
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v0

    const-string v2, "ad_allow_web_url_regex"

    const-string v3, ".+(www.chengzijianzhan.com|www.toutiaopage.com/tetris/page|ad.toutiao.com/tetris/page).+"

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 74
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/regex/Matcher;->matches()Z

    move-result p1

    if-eqz p1, :cond_4

    return v1

    :cond_4
    const/4 p1, 0x1

    return p1
.end method

.method public rg(Lcom/ss/android/downloadlib/addownload/model/pp;)Z
    .locals 16

    move-object/from16 v1, p1

    .line 84
    iget-object v0, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v0}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-wide/16 v2, 0x0

    if-nez v0, :cond_1

    .line 86
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v4, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v4}, Lcom/ss/android/download/api/download/DownloadModel;->getLogExtra()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v0, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "convert_id"

    .line 87
    invoke-static {v0, v4}, Lcom/ss/android/downloadlib/utils/b;->rg(Lorg/json/JSONObject;Ljava/lang/String;)J

    move-result-wide v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 89
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    move-wide v4, v2

    :goto_0
    cmp-long v0, v4, v2

    if-gtz v0, :cond_0

    const/4 v0, 0x3

    .line 92
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(ILcom/ss/android/downloadlib/addownload/model/pp;)V

    :cond_0
    move-wide v11, v4

    goto :goto_1

    :cond_1
    const/16 v0, 0x9

    .line 95
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(ILcom/ss/android/downloadlib/addownload/model/pp;)V

    .line 96
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const-string v4, "requestAppInfo getLogExtra null"

    invoke-virtual {v0, v4}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    move-wide v11, v2

    .line 100
    :goto_1
    iget-wide v13, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->rg:J

    .line 102
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg()Lcom/ss/android/downloadlib/addownload/compliance/q;

    move-result-object v0

    invoke-virtual {v0, v11, v12, v13, v14}, Lcom/ss/android/downloadlib/addownload/compliance/q;->rg(JJ)Lcom/ss/android/downloadlib/addownload/model/df;

    move-result-object v0

    const/4 v15, 0x1

    if-eqz v0, :cond_2

    .line 105
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg()Lcom/ss/android/downloadlib/addownload/compliance/pt;

    move-result-object v4

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/df;->rg()J

    move-result-wide v5

    iget-object v9, v0, Lcom/ss/android/downloadlib/addownload/model/df;->pt:Ljava/lang/String;

    move-wide v7, v13

    invoke-virtual/range {v4 .. v9}, Lcom/ss/android/downloadlib/addownload/compliance/pt;->rg(JJLjava/lang/String;)V

    .line 106
    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/model/df;->rg()J

    move-result-wide v2

    move-object/from16 v4, p0

    invoke-virtual {v4, v2, v3}, Lcom/ss/android/downloadlib/addownload/compliance/df;->rg(J)V

    const-string v0, "lp_app_dialog_try_show"

    .line 107
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/addownload/model/pp;)V

    return v15

    :cond_2
    move-object/from16 v4, p0

    .line 111
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    cmp-long v2, v11, v2

    if-lez v2, :cond_3

    const-string v2, "convert_id="

    .line 113
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 115
    :cond_3
    iget-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    .line 116
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    if-lez v2, :cond_4

    const-string v2, "&"

    .line 117
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    const-string v2, "package_name="

    .line 119
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v1, Lcom/ss/android/downloadlib/addownload/model/pp;->df:Lcom/ss/android/download/api/download/DownloadModel;

    invoke-interface {v2}, Lcom/ss/android/download/api/download/DownloadModel;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 121
    :cond_5
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v2

    if-gtz v2, :cond_6

    const/4 v0, 0x6

    .line 123
    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/addownload/compliance/pp;->rg(ILcom/ss/android/downloadlib/addownload/model/pp;)V

    const/4 v0, 0x0

    return v0

    .line 128
    :cond_6
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "https://apps.oceanengine.com/customer/api/app/pkg_info?"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 130
    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/df$2;

    move-object v5, v1

    move-object/from16 v6, p0

    move-wide v7, v11

    move-wide v9, v13

    invoke-direct/range {v5 .. v10}, Lcom/ss/android/downloadlib/addownload/compliance/df$2;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/df;JJ)V

    invoke-static {v1, v0}, Lcom/ss/android/downloadlib/utils/Chain;->rg(Lcom/ss/android/downloadlib/utils/Chain$rg;Ljava/lang/Object;)Lcom/ss/android/downloadlib/utils/Chain;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/addownload/compliance/df$1;

    move-object v5, v1

    invoke-direct/range {v5 .. v10}, Lcom/ss/android/downloadlib/addownload/compliance/df$1;-><init>(Lcom/ss/android/downloadlib/addownload/compliance/df;JJ)V

    .line 155
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/utils/Chain;->rg(Lcom/ss/android/downloadlib/utils/Chain$rg;)Lcom/ss/android/downloadlib/utils/Chain;

    move-result-object v0

    .line 166
    invoke-virtual {v0}, Lcom/ss/android/downloadlib/utils/Chain;->rg()V

    return v15
.end method
