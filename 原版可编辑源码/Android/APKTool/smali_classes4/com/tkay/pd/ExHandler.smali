.class public Lcom/tkay/pd/ExHandler;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/IExHandler;


# static fields
.field public static final JSON_REQUEST_BOOT_MARK:Ljava/lang/String; = "boot_mark"

.field public static final JSON_REQUEST_CPU:Ljava/lang/String; = "cpu"

.field public static final JSON_REQUEST_IMEI:Ljava/lang/String; = "imei"

.field public static final JSON_REQUEST_INSTALL_TS:Ljava/lang/String; = "install_ts"

.field public static final JSON_REQUEST_ISAGENT:Ljava/lang/String; = "isagent"

.field public static final JSON_REQUEST_ISROOT:Ljava/lang/String; = "isroot"

.field public static final JSON_REQUEST_MAC:Ljava/lang/String; = "mac"

.field public static final JSON_REQUEST_OAID:Ljava/lang/String; = "oaid"

.field public static final JSON_REQUEST_SSID:Ljava/lang/String; = "wifi_name"

.field public static final JSON_REQUEST_UPDATE_MARK:Ljava/lang/String; = "update_mark"

.field public static final JSON_REQUEST_UPDATE_TS:Ljava/lang/String; = "update_ts"


# instance fields
.field imeiOpen:I

.field macOpen:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 46
    iput v0, p0, Lcom/tkay/pd/ExHandler;->macOpen:I

    .line 47
    iput v0, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I

    return-void
.end method


# virtual methods
.method public checkDebuggerDevice(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 3

    .line 216
    invoke-static {}, Lcom/tkay/china/b/a;->b()Ljava/lang/String;

    move-result-object v0

    .line 217
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "tkay_sdk"

    const-string v1, "oaid"

    const-string v2, ""

    .line 218
    invoke-static {p1, v0, v1, v2}, Lcom/tkay/core/common/l/p;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 220
    :cond_0
    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method public checkDownloadType(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)I
    .locals 0

    .line 211
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/core/common/f/h;)I

    move-result p1

    return p1
.end method

.method public createDownloadListener(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)Lcom/tkay/core/api/TYEventInterface;
    .locals 1

    .line 199
    new-instance v0, Lcom/tkay/china/common/c;

    invoke-direct {v0, p1, p2, p3}, Lcom/tkay/china/common/c;-><init>(Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/api/TYEventInterface;)V

    return-object v0
.end method

.method public fillCDataParam(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    if-nez p1, :cond_0

    return-object v0

    .line 172
    :cond_0
    iget v1, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_1
    move-object v1, v0

    .line 173
    :goto_0
    iget v3, p0, Lcom/tkay/pd/ExHandler;->macOpen:I

    if-ne v3, v2, :cond_2

    invoke-static {}, Lcom/tkay/china/b/a;->a()Ljava/lang/String;

    move-result-object v2

    goto :goto_1

    :cond_2
    move-object v2, v0

    .line 174
    :goto_1
    invoke-static {}, Lcom/tkay/china/b/a;->b()Ljava/lang/String;

    move-result-object v3

    if-nez v1, :cond_3

    move-object v1, v0

    :cond_3
    const-string v4, "at_device1"

    .line 176
    invoke-virtual {p1, v4, v1}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez v2, :cond_4

    move-object v2, v0

    :cond_4
    const-string v1, "at_device2"

    .line 177
    invoke-virtual {p1, v1, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    if-nez v3, :cond_5

    goto :goto_2

    :cond_5
    move-object v0, v3

    :goto_2
    const-string v1, "at_device3"

    .line 178
    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public fillRequestData(Lorg/json/JSONObject;Lcom/tkay/core/c/a;)V
    .locals 5

    const-string v0, ""

    if-eqz p2, :cond_0

    .line 61
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->F()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    move-object p2, v0

    .line 62
    :goto_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "oaid"

    const-string v3, "imei"

    const-string v4, "mac"

    if-eqz v1, :cond_1

    .line 64
    :try_start_0
    invoke-static {}, Lcom/tkay/china/b/a;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 65
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 66
    invoke-static {}, Lcom/tkay/china/b/a;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void

    .line 73
    :cond_1
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "m"

    .line 74
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    iput p2, p0, Lcom/tkay/pd/ExHandler;->macOpen:I

    const-string p2, "i"

    .line 75
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    iput p2, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 81
    :catch_1
    :try_start_2
    iget p2, p0, Lcom/tkay/pd/ExHandler;->macOpen:I

    const/4 v1, 0x1

    if-ne p2, v1, :cond_2

    invoke-static {}, Lcom/tkay/china/b/a;->a()Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_2
    move-object p2, v0

    :goto_1
    invoke-virtual {p1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 82
    iget p2, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I

    if-ne p2, v1, :cond_3

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    :cond_3
    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 83
    invoke-static {}, Lcom/tkay/china/b/a;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    return-void
.end method

.method public fillRequestDeviceData(Lorg/json/JSONObject;I)V
    .locals 3

    and-int/lit8 v0, p2, 0x1

    const/4 v1, 0x1

    if-ne v0, v1, :cond_4

    .line 94
    :try_start_0
    invoke-static {}, Lcom/tkay/china/b/a;->d()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "isroot"

    .line 95
    invoke-static {}, Lcom/tkay/china/b/a;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 100
    :catchall_0
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/china/b/a;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "isagent"

    .line 101
    invoke-static {}, Lcom/tkay/china/b/a;->e()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_1
    :try_start_2
    const-string v0, "wifi_name"

    .line 106
    invoke-static {}, Lcom/tkay/china/b/a;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 110
    :catchall_2
    :try_start_3
    invoke-static {}, Lcom/tkay/china/b/a;->f()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "install_ts"

    .line 111
    invoke-static {}, Lcom/tkay/china/b/a;->f()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    .line 116
    :catchall_3
    :cond_2
    :try_start_4
    invoke-static {}, Lcom/tkay/china/b/a;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "update_ts"

    .line 117
    invoke-static {}, Lcom/tkay/china/b/a;->g()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v1

    invoke-virtual {p1, v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    :catchall_4
    :cond_3
    :try_start_5
    const-string v0, "cpu"

    .line 122
    invoke-static {}, Lcom/tkay/china/b/a;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    :catchall_5
    :cond_4
    const/4 v0, 0x2

    and-int/2addr p2, v0

    if-ne p2, v0, :cond_5

    :try_start_6
    const-string p2, "boot_mark"

    .line 129
    invoke-static {}, Lcom/tkay/china/b/a;->i()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "update_mark"

    .line 130
    invoke-static {}, Lcom/tkay/china/b/a;->j()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_6

    :catchall_6
    :cond_5
    return-void
.end method

.method public fillTestDeviceData(Lorg/json/JSONObject;Lcom/tkay/core/c/a;)V
    .locals 5

    const-string v0, ""

    if-eqz p2, :cond_0

    .line 138
    invoke-virtual {p2}, Lcom/tkay/core/c/a;->F()Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    move-object p2, v0

    .line 139
    :goto_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "OAID"

    const-string v3, "IMEI"

    if-eqz v1, :cond_2

    .line 141
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    .line 142
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    :cond_1
    move-object v0, p2

    :goto_1
    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 143
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void

    .line 150
    :cond_2
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "m"

    .line 151
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    iput p2, p0, Lcom/tkay/pd/ExHandler;->macOpen:I

    const-string p2, "i"

    .line 152
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    iput p2, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 158
    :catch_1
    :try_start_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    .line 159
    iget v1, p0, Lcom/tkay/pd/ExHandler;->imeiOpen:I

    const/4 v4, 0x1

    if-ne v1, v4, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    move-object v0, p2

    :cond_3
    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 160
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/china/b/a;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    :catch_2
    return-void
.end method

.method public getUniqueId(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 56
    invoke-static {p1}, Lcom/tkay/china/b/a;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public handleOfferClick(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Lcom/tkay/core/common/g/b;)V
    .locals 8

    .line 193
    invoke-static {p1}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/a;

    move-result-object v0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    move-object v5, p5

    move-object v6, p6

    move-object v7, p7

    invoke-virtual/range {v0 .. v7}, Lcom/tkay/china/common/a;->a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Lcom/tkay/core/common/g/b;)V

    return-void
.end method

.method public initDeviceInfo(Landroid/content/Context;)V
    .locals 0

    .line 51
    invoke-static {p1}, Lcom/tkay/china/b/a;->a(Landroid/content/Context;)V

    return-void
.end method

.method public openApkConfirmDialog(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/g/a;)V
    .locals 0

    .line 205
    invoke-static {p1, p2, p4}, Lcom/tkay/china/activity/ApkConfirmDialogActivity;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/g/a;)V

    return-void
.end method
