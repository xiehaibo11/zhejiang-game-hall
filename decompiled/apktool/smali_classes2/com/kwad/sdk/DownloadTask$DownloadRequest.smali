.class public Lcom/kwad/sdk/DownloadTask$DownloadRequest;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/DownloadTask;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "DownloadRequest"
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x327dcdaac0d94ceaL


# instance fields
.field public downloadEnablePause:Z

.field private mAllowedNetworkTypes:I

.field private mDestinationDir:Ljava/lang/String;

.field private mDestinationFileName:Ljava/lang/String;

.field private mDownloadUrl:Ljava/lang/String;

.field private mInstallAfterDownload:Z

.field private mIsPhotoAdDownloadRequest:Z
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field private mNotificationVisibility:I

.field private final mRequestHeaders:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mTag:Ljava/io/Serializable;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mRequestHeaders:Ljava/util/Map;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mInstallAfterDownload:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mIsPhotoAdDownloadRequest:Z

    const/4 v1, 0x3

    iput v1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    iput v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mNotificationVisibility:I

    iput-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->downloadEnablePause:Z

    invoke-static {}, Lcom/kwad/sdk/c;->wP()Lcom/kwad/sdk/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/c;->wQ()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationDir:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDownloadUrl:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/c;->wP()Lcom/kwad/sdk/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/c;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->ci(Landroid/content/Context;)Landroid/net/NetworkInfo;

    move-result-object p1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/net/NetworkInfo;->getType()I

    move-result p1

    if-nez p1, :cond_0

    iput v1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    return-void

    :cond_0
    const/4 p1, 0x2

    iput p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    return-void
.end method

.method static synthetic access$000(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mInstallAfterDownload:Z

    return p0
.end method

.method static synthetic access$100(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDownloadUrl:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    return p0
.end method

.method static synthetic access$300(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mNotificationVisibility:I

    return p0
.end method

.method static synthetic access$400(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationDir:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$500(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationFileName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$600(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Ljava/util/Map;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mRequestHeaders:Ljava/util/Map;

    return-object p0
.end method

.method static synthetic access$700(Lcom/kwad/sdk/DownloadTask$DownloadRequest;)Ljava/io/Serializable;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mTag:Ljava/io/Serializable;

    return-object p0
.end method


# virtual methods
.method public addRequestHeader(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->fE(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, ":"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p2, :cond_0

    const-string p2, ""

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mRequestHeaders:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object p0

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "header may not contain \':\'"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public getAllowedNetworkTypes()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    return v0
.end method

.method public getDestinationDir()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationDir:Ljava/lang/String;

    return-object v0
.end method

.method public getDestinationFileName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationFileName:Ljava/lang/String;

    return-object v0
.end method

.method public getDownloadUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDownloadUrl:Ljava/lang/String;

    return-object v0
.end method

.method public getTag()Ljava/io/Serializable;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mTag:Ljava/io/Serializable;

    return-object v0
.end method

.method public isDownloadEnablePause()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->downloadEnablePause:Z

    return v0
.end method

.method public isPhotoAdDownloadRequest()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mIsPhotoAdDownloadRequest:Z

    return v0
.end method

.method public setAllowedNetworkTypes(I)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mAllowedNetworkTypes:I

    return-object p0
.end method

.method public setDestinationDir(Ljava/lang/String;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationDir:Ljava/lang/String;

    return-object p0
.end method

.method public setDestinationFileName(Ljava/lang/String;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mDestinationFileName:Ljava/lang/String;

    return-object p0
.end method

.method public setDownloadEnablePause(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->downloadEnablePause:Z

    return-void
.end method

.method public setInstallAfterDownload(Z)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mInstallAfterDownload:Z

    return-object p0
.end method

.method public setIsPhotoAdDownloadRequest()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mIsPhotoAdDownloadRequest:Z

    return-void
.end method

.method public setNotificationVisibility(I)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mNotificationVisibility:I

    return-object p0
.end method

.method public setTag(Ljava/io/Serializable;)Lcom/kwad/sdk/DownloadTask$DownloadRequest;
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/DownloadTask$DownloadRequest;->mTag:Ljava/io/Serializable;

    return-object p0
.end method
