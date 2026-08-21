.class public final enum Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;
.super Ljava/lang/Enum;
.source "DownloadCode.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/patch/download/DownloadCode;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "Code"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileIsBroken:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileRenameFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileSyncReadStatusException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileVerifyHashFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum FileVerifySizeFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum NetworkTimeout:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum NetworkUnreachable:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum Success:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

.field public static final enum TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;


# direct methods
.method static constructor <clinit>()V
    .locals 16

    .line 8
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v1, 0x0

    const-string v2, "ManualStop"

    invoke-direct {v0, v2, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 10
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v2, 0x1

    const-string v3, "Success"

    invoke-direct {v0, v3, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->Success:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 11
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v3, 0x2

    const-string v4, "TaskIsDownloading"

    invoke-direct {v0, v4, v3}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 13
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v4, 0x3

    const-string v5, "RequestFail"

    invoke-direct {v0, v5, v4}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 15
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v5, 0x4

    const-string v6, "FileStatusSyncError"

    invoke-direct {v0, v6, v5}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 16
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v6, 0x5

    const-string v7, "FileSyncReadStatusException"

    invoke-direct {v0, v7, v6}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileSyncReadStatusException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 17
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v7, 0x6

    const-string v8, "FileReadStreamException"

    invoke-direct {v0, v8, v7}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 19
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/4 v8, 0x7

    const-string v9, "FileIsBroken"

    invoke-direct {v0, v9, v8}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileIsBroken:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 20
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v9, 0x8

    const-string v10, "FileVerifyHashFailed"

    invoke-direct {v0, v10, v9}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifyHashFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 21
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v10, 0x9

    const-string v11, "FileVerifySizeFailed"

    invoke-direct {v0, v11, v10}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifySizeFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 23
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v11, 0xa

    const-string v12, "FileRenameFailed"

    invoke-direct {v0, v12, v11}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileRenameFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 25
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v12, 0xb

    const-string v13, "NetworkTimeout"

    invoke-direct {v0, v13, v12}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkTimeout:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 26
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v13, 0xc

    const-string v14, "NetworkUnreachable"

    invoke-direct {v0, v14, v13}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkUnreachable:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    const/16 v14, 0xd

    new-array v14, v14, [Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    .line 7
    sget-object v15, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v15, v14, v1

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->Success:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v2

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v3

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->RequestFail:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v4

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileStatusSyncError:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v5

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileSyncReadStatusException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v6

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileReadStreamException:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v7

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileIsBroken:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v8

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifyHashFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v9

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileVerifySizeFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v10

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->FileRenameFailed:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v11

    sget-object v1, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->NetworkTimeout:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    aput-object v1, v14, v12

    aput-object v0, v14, v13

    sput-object v14, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->$VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 7
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;
    .locals 1

    .line 7
    const-class v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    return-object p0
.end method

.method public static values()[Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;
    .locals 1

    .line 7
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->$VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    invoke-virtual {v0}, [Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    return-object v0
.end method
