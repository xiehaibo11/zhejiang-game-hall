.class public final Lcom/kwad/sdk/core/b/a/cn;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/download/DownloadParams;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/download/DownloadParams;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "mDownloadid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    :cond_1
    const-string v0, "mAppName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    :cond_2
    const-string v0, "mPkgname"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    :cond_3
    const-string v0, "mVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    :cond_4
    const-string v0, "mVersionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    :cond_5
    const-string v0, "mAppSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppSize:J

    const-string v0, "mFileMd5"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    :cond_6
    const-string v0, "mFileUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    :cond_7
    const-string v0, "mAppIcon"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    :cond_8
    const-string v0, "mShortDesc"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    :cond_9
    const-string v0, "mTaskId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mTaskId:I

    const-string v0, "filePath"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    :cond_a
    const-string v0, "requestInstallPermission"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->requestInstallPermission:Z

    const-string v0, "downloadEnablePause"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadEnablePause:Z

    const-string v0, "downloadPlace"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadPlace:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/download/DownloadParams;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mDownloadid:Ljava/lang/String;

    const-string v2, "mDownloadid"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    const-string v2, "mAppName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mPkgname:Ljava/lang/String;

    const-string v2, "mPkgname"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersion:Ljava/lang/String;

    const-string v2, "mVersion"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mVersionCode:Ljava/lang/String;

    const-string v2, "mVersionCode"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-wide v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppSize:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_6

    iget-wide v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppSize:J

    const-string v0, "mAppSize"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileMd5:Ljava/lang/String;

    const-string v2, "mFileMd5"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mFileUrl:Ljava/lang/String;

    const-string v2, "mFileUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    const-string v2, "mAppIcon"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mShortDesc:Ljava/lang/String;

    const-string v2, "mShortDesc"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mTaskId:I

    if-eqz v0, :cond_b

    iget v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mTaskId:I

    const-string v2, "mTaskId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->filePath:Ljava/lang/String;

    const-string v1, "filePath"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->requestInstallPermission:Z

    if-eqz v0, :cond_d

    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->requestInstallPermission:Z

    const-string v1, "requestInstallPermission"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_d
    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadEnablePause:Z

    if-eqz v0, :cond_e

    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadEnablePause:Z

    const-string v1, "downloadEnablePause"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_e
    iget v0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadPlace:I

    if-eqz v0, :cond_f

    iget p0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->downloadPlace:I

    const-string v0, "downloadPlace"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_f
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/download/DownloadParams;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cn;->a(Lcom/kwad/sdk/core/download/DownloadParams;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/download/DownloadParams;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/cn;->b(Lcom/kwad/sdk/core/download/DownloadParams;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method
