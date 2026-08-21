.class public Lcom/ymnsdk/replugin/entity/DownloadEntity;
.super Ljava/lang/Object;
.source "DownloadEntity.java"


# instance fields
.field activity:Landroid/app/Activity;

.field callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

.field downSize:J

.field downloadType:I

.field downloadUri:Ljava/lang/String;

.field md5:Ljava/lang/String;

.field noNetTimeout:I

.field pluginId:Ljava/lang/String;

.field weaknetTimeout:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->activity:Landroid/app/Activity;

    .line 33
    iput-object p2, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->pluginId:Ljava/lang/String;

    .line 34
    iput-object p3, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadUri:Ljava/lang/String;

    .line 35
    iput p4, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadType:I

    .line 36
    iput-wide p5, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downSize:J

    .line 37
    iput-object p7, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->md5:Ljava/lang/String;

    .line 38
    iput p8, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->noNetTimeout:I

    .line 39
    iput p9, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->weaknetTimeout:I

    .line 40
    iput-object p10, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    return-void
.end method


# virtual methods
.method public getActivity()Landroid/app/Activity;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->activity:Landroid/app/Activity;

    return-object v0
.end method

.method public getCallback()Lcom/ymnsdk/replugin/patch/download/DownloadCallback;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    return-object v0
.end method

.method public getDownSize()J
    .locals 2

    .line 76
    iget-wide v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downSize:J

    return-wide v0
.end method

.method public getDownloadType()I
    .locals 1

    .line 68
    iget v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadType:I

    return v0
.end method

.method public getDownloadUri()Ljava/lang/String;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadUri:Ljava/lang/String;

    return-object v0
.end method

.method public getMd5()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->md5:Ljava/lang/String;

    return-object v0
.end method

.method public getNoNetTimeout()I
    .locals 1

    .line 92
    iget v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->noNetTimeout:I

    return v0
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->pluginId:Ljava/lang/String;

    return-object v0
.end method

.method public getWeaknetTimeout()I
    .locals 1

    .line 100
    iget v0, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->weaknetTimeout:I

    return v0
.end method

.method public setActivity(Landroid/app/Activity;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->activity:Landroid/app/Activity;

    return-void
.end method

.method public setCallback(Lcom/ymnsdk/replugin/patch/download/DownloadCallback;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->callback:Lcom/ymnsdk/replugin/patch/download/DownloadCallback;

    return-void
.end method

.method public setDownSize(J)V
    .locals 0

    .line 80
    iput-wide p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downSize:J

    return-void
.end method

.method public setDownloadType(I)V
    .locals 0

    .line 72
    iput p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadType:I

    return-void
.end method

.method public setDownloadUri(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->downloadUri:Ljava/lang/String;

    return-void
.end method

.method public setMd5(Ljava/lang/String;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->md5:Ljava/lang/String;

    return-void
.end method

.method public setNoNetTimeout(I)V
    .locals 0

    .line 96
    iput p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->noNetTimeout:I

    return-void
.end method

.method public setPluginId(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->pluginId:Ljava/lang/String;

    return-void
.end method

.method public setWeaknetTimeout(I)V
    .locals 0

    .line 104
    iput p1, p0, Lcom/ymnsdk/replugin/entity/DownloadEntity;->weaknetTimeout:I

    return-void
.end method
