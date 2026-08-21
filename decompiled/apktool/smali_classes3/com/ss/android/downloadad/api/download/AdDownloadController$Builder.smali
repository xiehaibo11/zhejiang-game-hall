.class public final Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadad/api/download/AdDownloadController;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "Builder"
.end annotation


# instance fields
.field controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 241
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 239
    new-instance v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;

    invoke-direct {v0}, Lcom/ss/android/downloadad/api/download/AdDownloadController;-><init>()V

    iput-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    return-void
.end method


# virtual methods
.method public build()Lcom/ss/android/downloadad/api/download/AdDownloadController;
    .locals 1

    .line 344
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    return-object v0
.end method

.method public setDowloadChunkCount(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-object p0
.end method

.method public setDownloadMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 250
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mDownloadMode:I

    return-object p0
.end method

.method public setEnableAH(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 331
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAH:Z

    return-object p0
.end method

.method public setEnableAM(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 339
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableAM:Z

    return-object p0
.end method

.method public setEnableNewActivity(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 323
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableNewActivity:Z

    return-object p0
.end method

.method public setEnableShowComplianceDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 310
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mEnableShowComplianceDialog:Z

    return-object p0
.end method

.method public setExtraJson(Lorg/json/JSONObject;)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 294
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-object p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraJson:Lorg/json/JSONObject;

    return-object p0
.end method

.method public setExtraObject(Ljava/lang/Object;)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 299
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-object p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraObject:Ljava/lang/Object;

    return-object p0
.end method

.method public setExtraOperation(Ljava/lang/Object;)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 279
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-object p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mExtraClickOperation:Ljava/lang/Object;

    return-object p0
.end method

.method public setInterceptFlag(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 289
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mInterceptFlag:I

    return-object p0
.end method

.method public setIsAddToDownloadManage(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 260
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAddToDownloadManage:Z

    return-object p0
.end method

.method public setIsAutoDownloadOnCardShow(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 318
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsAutoDownloadOnCardShow:Z

    return-object p0
.end method

.method public setIsEnableBackDialog(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mIsEnableBackDialog:Z

    return-object p0
.end method

.method public setIsEnableMultipleDownload(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    return-object p0
.end method

.method public setLinkMode(I)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 245
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mLinkMode:I

    return-object p0
.end method

.method public setShouldUseNewWebView(Z)Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;
    .locals 1

    .line 284
    iget-object v0, p0, Lcom/ss/android/downloadad/api/download/AdDownloadController$Builder;->controller:Lcom/ss/android/downloadad/api/download/AdDownloadController;

    iput-boolean p1, v0, Lcom/ss/android/downloadad/api/download/AdDownloadController;->mShouldUseNewWebView:Z

    return-object p0
.end method
