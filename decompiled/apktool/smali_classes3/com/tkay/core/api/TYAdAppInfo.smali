.class public abstract Lcom/tkay/core/api/TYAdAppInfo;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public abstract getAppDownloadCount()Ljava/lang/String;
.end method

.method public abstract getAppName()Ljava/lang/String;
.end method

.method public abstract getAppPackageName()Ljava/lang/String;
.end method

.method public abstract getAppPermissonUrl()Ljava/lang/String;
.end method

.method public abstract getAppPrivacyUrl()Ljava/lang/String;
.end method

.method public abstract getAppSize()J
.end method

.method public abstract getAppVersion()Ljava/lang/String;
.end method

.method public abstract getPublisher()Ljava/lang/String;
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 32
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Publisher: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getPublisher()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, ""

    if-eqz v1, :cond_0

    move-object v1, v2

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getPublisher()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppVersion: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 34
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppVersion()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    move-object v1, v2

    goto :goto_1

    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppVersion()Ljava/lang/String;

    move-result-object v1

    :goto_1
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppPrivacyUrl: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 36
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPrivacyUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    move-object v1, v2

    goto :goto_2

    :cond_2
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPrivacyUrl()Ljava/lang/String;

    move-result-object v1

    :goto_2
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppPermissonUrl: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 38
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPermissonUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    move-object v1, v2

    goto :goto_3

    :cond_3
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPermissonUrl()Ljava/lang/String;

    move-result-object v1

    :goto_3
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppName: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 40
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_4

    move-object v1, v2

    goto :goto_4

    :cond_4
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppName()Ljava/lang/String;

    move-result-object v1

    :goto_4
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppPackageName: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 42
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    goto :goto_5

    :cond_5
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPackageName()Ljava/lang/String;

    move-result-object v2

    :goto_5
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " | AppSize: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 44
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppSize()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " | AppDownloadCount: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 46
    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdAppInfo;->getAppDownloadCount()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
