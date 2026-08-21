.class public Lcom/ymnsdk/replugin/patch/download/DownloadState;
.super Ljava/lang/Object;
.source "DownloadState.java"


# static fields
.field public static final DOWNLOAD_RESTART_NUM:I = 0x5

.field public static final MAX_MERGE_NUM:I = 0x3

.field public static volatile NetWorkAvailable:Z = false

.field public static final SILENT_DOWNLOAD_RESTART_NUM:I = 0xa

.field public static volatile downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

.field private static downloadState:Lcom/ymnsdk/replugin/patch/download/DownloadState;

.field public static volatile isDownloadRecovery:Z

.field public static volatile isNoNetTimeout:Z

.field public static volatile loading:Z

.field public static volatile openSilentDownload:Z

.field public static volatile remerge_num:I

.field public static volatile restart_num:I

.field public static volatile silent_restart_num:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 13
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadState:Lcom/ymnsdk/replugin/patch/download/DownloadState;

    const/4 v0, 0x0

    .line 25
    sput v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    .line 27
    sput v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->restart_num:I

    .line 29
    sput v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->silent_restart_num:I

    .line 31
    sput-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->loading:Z

    .line 33
    sput-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isNoNetTimeout:Z

    .line 35
    sput-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isDownloadRecovery:Z

    const/4 v1, 0x1

    .line 37
    sput-boolean v1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->NetWorkAvailable:Z

    .line 39
    sput-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->openSilentDownload:Z

    .line 41
    new-instance v0, Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/DownloadEntity;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;
    .locals 1

    .line 16
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadState:Lcom/ymnsdk/replugin/patch/download/DownloadState;

    return-object v0
.end method


# virtual methods
.method public downloadEnd()V
    .locals 2

    .line 106
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsDownloadRecovery(Z)V

    .line 107
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    return-void
.end method

.method public getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;
    .locals 1

    .line 101
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    return-object v0
.end method

.method public getLoadState()Z
    .locals 1

    .line 50
    sget-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->loading:Z

    return v0
.end method

.method public init(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IILcom/ymnsdk/replugin/patch/download/DownloadCallback;)V
    .locals 1

    .line 88
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setActivity(Landroid/app/Activity;)V

    .line 89
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setPluginId(Ljava/lang/String;)V

    .line 90
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p3}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setDownloadUri(Ljava/lang/String;)V

    .line 91
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p4}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setDownloadType(I)V

    .line 92
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p5, p6}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setDownSize(J)V

    .line 93
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p7}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setMd5(Ljava/lang/String;)V

    .line 94
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p8}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setNoNetTimeout(I)V

    .line 95
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p9}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setWeaknetTimeout(I)V

    .line 96
    sget-object p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->downloadEntity:Lcom/ymnsdk/replugin/entity/DownloadEntity;

    invoke-virtual {p1, p10}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->setCallback(Lcom/ymnsdk/replugin/patch/download/DownloadCallback;)V

    return-void
.end method

.method public isIsDownloadRecovery()Z
    .locals 1

    .line 62
    sget-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isDownloadRecovery:Z

    return v0
.end method

.method public isIsNoNetTimeout()Z
    .locals 1

    .line 54
    sget-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isNoNetTimeout:Z

    return v0
.end method

.method public isNetWorkAvailable()Z
    .locals 1

    .line 71
    sget-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->NetWorkAvailable:Z

    return v0
.end method

.method public isOpenSilentDownload()Z
    .locals 1

    .line 79
    sget-boolean v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->openSilentDownload:Z

    return v0
.end method

.method public setIsDownloadRecovery(Z)V
    .locals 0

    .line 66
    sput-boolean p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isDownloadRecovery:Z

    return-void
.end method

.method public setIsNoNetTimeout(Z)V
    .locals 0

    .line 58
    sput-boolean p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isNoNetTimeout:Z

    return-void
.end method

.method public setLoadState(Ljava/lang/Boolean;)V
    .locals 0

    .line 45
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1

    sput-boolean p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->loading:Z

    return-void
.end method

.method public setNetWorkAvailable(Z)V
    .locals 0

    .line 75
    sput-boolean p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->NetWorkAvailable:Z

    return-void
.end method

.method public setOpenSilentDownload(Z)V
    .locals 0

    .line 83
    sput-boolean p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->openSilentDownload:Z

    return-void
.end method
