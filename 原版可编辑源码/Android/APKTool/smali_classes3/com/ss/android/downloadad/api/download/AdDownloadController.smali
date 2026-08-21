.class public Lcom/ss/android/downloadad/api/download/AdDownloadController;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/download/DownloadController;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    }
.end annotation


# instance fields
.field protected mDownloadMode:I

.field protected mEnableAH:Z

.field protected mEnableAM:Z

.field protected mEnableNewActivity:Z

.field protected mEnableShowComplianceDialog:Z

.field protected mExtraClickOperation:Ljava/lang/Object;

.field protected mExtraJson:Lorg/json/JSONObject;

.field protected mExtraObject:Ljava/lang/Object;

.field protected mInterceptFlag:I

.field protected mIsAddToDownloadManage:Z

.field protected mIsAutoDownloadOnCardShow:Z

.field protected mIsEnableBackDialog:Z

.field protected mLinkMode:I

.field protected mShouldUseNewWebView:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 66
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 48
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableShowComplianceDialog:Z

    .line 54
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableNewActivity:Z

    .line 57
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAH:Z

    .line 60
    iput-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAM:Z

    return-void
.end method

.method public static fromJson(Lorg/json/JSONObject;)Lcom/ss/android/downloadad/api/download/AdDownloadController;
    .locals 4

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 217
    :cond_0
    new-instance v0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;-><init>()V

    :try_start_0
    const-string v1, "link_mode"

    .line 219
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setLinkMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "download_mode"

    .line 220
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setDownloadMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "enable_back_dialog"

    .line 221
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_1

    move v1, v3

    goto :goto_0

    :cond_1
    move v1, v2

    :goto_0
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setIsEnableBackDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "add_to_manage"

    .line 222
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    if-ne v1, v3, :cond_2

    move v1, v3

    goto :goto_1

    :cond_2
    move v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setIsAddToDownloadManage(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "use_new_webview"

    .line 223
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    if-ne v1, v3, :cond_3

    move v1, v3

    goto :goto_2

    :cond_3
    move v1, v2

    :goto_2
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setShouldUseNewWebView(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "intercept_flag"

    .line 224
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setInterceptFlag(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "enable_show_compliance_dialog"

    .line 225
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v3, :cond_4

    move v1, v3

    goto :goto_3

    :cond_4
    move v1, v2

    :goto_3
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableShowComplianceDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "is_auto_download_on_card_show"

    .line 226
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    if-ne v1, v3, :cond_5

    move v1, v3

    goto :goto_4

    :cond_5
    move v1, v2

    :goto_4
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setIsAutoDownloadOnCardShow(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "enable_new_activity"

    .line 227
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v3, :cond_6

    move v1, v3

    goto :goto_5

    :cond_6
    move v1, v2

    :goto_5
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableNewActivity(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "enable_ah"

    .line 228
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v3, :cond_7

    move v1, v3

    goto :goto_6

    :cond_7
    move v1, v2

    :goto_6
    invoke-virtual {v0, v1}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableAH(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "enable_am"

    .line 229
    invoke-virtual {p0, v1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1

    if-ne v1, v3, :cond_8

    move v2, v3

    :cond_8
    invoke-virtual {v0, v2}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setEnableAM(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;

    const-string v1, "extra"

    .line 230
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-virtual {v0, p0}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->setExtraJson(Lorg/json/JSONObject;)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_7

    :catch_0
    move-exception p0

    .line 232
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v1

    const-string v2, "AdDownloadController fromJson"

    invoke-interface {v1, p0, v2}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    .line 234
    :goto_7
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->build()Lcom/ss/android/downloadad/api/download/AdDownloadController;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public enableAH()Z
    .locals 1

    .line 176
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAH:Z

    return v0
.end method

.method public enableAM()Z
    .locals 1

    .line 181
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAM:Z

    return v0
.end method

.method public enableNewActivity()Z
    .locals 1

    .line 162
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableNewActivity:Z

    return v0
.end method

.method public enableShowComplianceDialog()Z
    .locals 1

    .line 142
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableShowComplianceDialog:Z

    return v0
.end method

.method public getDowloadChunkCount()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public getDownloadMode()I
    .locals 1

    .line 77
    iget v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mDownloadMode:I

    return v0
.end method

.method public getExtraClickOperation()Ljava/lang/Object;
    .locals 1

    .line 92
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraClickOperation:Ljava/lang/Object;

    return-object v0
.end method

.method public getExtraJson()Lorg/json/JSONObject;
    .locals 1

    .line 117
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraJson:Lorg/json/JSONObject;

    return-object v0
.end method

.method public getExtraObject()Ljava/lang/Object;
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraObject:Ljava/lang/Object;

    return-object v0
.end method

.method public getInterceptFlag()I
    .locals 1

    .line 112
    iget v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mInterceptFlag:I

    return v0
.end method

.method public getLinkMode()I
    .locals 1

    .line 72
    iget v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mLinkMode:I

    return v0
.end method

.method public isAddToDownloadManage()Z
    .locals 1

    .line 87
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAddToDownloadManage:Z

    return v0
.end method

.method public isAutoDownloadOnCardShow()Z
    .locals 1

    .line 157
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAutoDownloadOnCardShow:Z

    return v0
.end method

.method public isEnableBackDialog()Z
    .locals 1

    .line 82
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsEnableBackDialog:Z

    return v0
.end method

.method public isEnableMultipleDownload()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public setDownloadMode(I)V
    .locals 0

    .line 127
    iput p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mDownloadMode:I

    return-void
.end method

.method public setEnableNewActivity(Z)V
    .locals 0

    .line 171
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableNewActivity:Z

    return-void
.end method

.method public setEnableShowComplianceDialog(Z)V
    .locals 0

    .line 152
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableShowComplianceDialog:Z

    return-void
.end method

.method public setExtraJson(Lorg/json/JSONObject;)V
    .locals 0

    .line 189
    iput-object p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraJson:Lorg/json/JSONObject;

    return-void
.end method

.method public setExtraObject(Ljava/lang/Object;)V
    .locals 0

    .line 185
    iput-object p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraObject:Ljava/lang/Object;

    return-void
.end method

.method public setIsAutoDownloadOnCardShow(Z)V
    .locals 0

    .line 166
    iput-boolean p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAutoDownloadOnCardShow:Z

    return-void
.end method

.method public setLinkMode(I)V
    .locals 0

    .line 132
    iput p1, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mLinkMode:I

    return-void
.end method

.method public shouldUseNewWebView()Z
    .locals 1

    .line 107
    iget-boolean v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mShouldUseNewWebView:Z

    return v0
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 5

    .line 193
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "link_mode"

    .line 195
    iget v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mLinkMode:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "download_mode"

    .line 196
    iget v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mDownloadMode:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enable_back_dialog"

    .line 197
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsEnableBackDialog:Z

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    move v2, v4

    :goto_0
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "add_to_manage"

    .line 198
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAddToDownloadManage:Z

    if-eqz v2, :cond_1

    move v2, v3

    goto :goto_1

    :cond_1
    move v2, v4

    :goto_1
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "use_new_webview"

    .line 199
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mShouldUseNewWebView:Z

    if-eqz v2, :cond_2

    move v2, v3

    goto :goto_2

    :cond_2
    move v2, v4

    :goto_2
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "intercept_flag"

    .line 200
    iget v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mInterceptFlag:I

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enable_show_compliance_dialog"

    .line 201
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableShowComplianceDialog:Z

    if-eqz v2, :cond_3

    move v2, v3

    goto :goto_3

    :cond_3
    move v2, v4

    :goto_3
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "is_auto_download_on_card_show"

    .line 202
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAutoDownloadOnCardShow:Z

    if-eqz v2, :cond_4

    move v2, v3

    goto :goto_4

    :cond_4
    move v2, v4

    :goto_4
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "extra"

    .line 203
    iget-object v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraJson:Lorg/json/JSONObject;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enable_new_activity"

    .line 204
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableNewActivity:Z

    if-eqz v2, :cond_5

    move v2, v3

    goto :goto_5

    :cond_5
    move v2, v4

    :goto_5
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enable_ah"

    .line 205
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAH:Z

    if-eqz v2, :cond_6

    move v2, v3

    goto :goto_6

    :cond_6
    move v2, v4

    :goto_6
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "enable_am"

    .line 206
    iget-boolean v2, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAM:Z

    if-eqz v2, :cond_7

    goto :goto_7

    :cond_7
    move v3, v4

    :goto_7
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_8

    :catch_0
    move-exception v1

    .line 208
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->qx()Lcom/ss/android/download/api/df/rg;

    move-result-object v2

    const-string v3, "AdDownloadController toJson"

    invoke-interface {v2, v1, v3}, Lcom/ss/android/download/api/df/rg;->rg(Ljava/lang/Throwable;Ljava/lang/String;)V

    :goto_8
    return-object v0
.end method
