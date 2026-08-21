.class public final enum Lcom/czhj/volley/toolbox/DownloadItem$FileType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/toolbox/DownloadItem;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "FileType"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/czhj/volley/toolbox/DownloadItem$FileType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum APK:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum MRAID_VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum PICTURE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

.field public static final enum ZIP_FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;


# instance fields
.field private mType:I


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v1, 0x0

    const/4 v2, 0x1

    const-string v3, "VIDEO"

    invoke-direct {v0, v3, v1, v2}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v3, 0x2

    const-string v4, "PICTURE"

    invoke-direct {v0, v4, v2, v3}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->PICTURE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v4, 0x3

    const-string v5, "FILE"

    invoke-direct {v0, v5, v3, v4}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const-string v5, "APK"

    const/16 v6, 0x8

    invoke-direct {v0, v5, v4, v6}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->APK:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v5, 0x4

    const-string v6, "OTHER"

    const/16 v7, 0x9

    invoke-direct {v0, v6, v5, v7}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v6, 0x5

    const-string v7, "ZIP_FILE"

    const/16 v8, 0xa

    invoke-direct {v0, v7, v6, v8}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->ZIP_FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v7, 0x6

    const-string v8, "MRAID_VIDEO"

    const/16 v9, 0xb

    invoke-direct {v0, v8, v7, v9}, Lcom/czhj/volley/toolbox/DownloadItem$FileType;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->MRAID_VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    sget-object v9, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->VIDEO:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v9, v8, v1

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->PICTURE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v1, v8, v2

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v1, v8, v3

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->APK:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v1, v8, v4

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->OTHER:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v1, v8, v5

    sget-object v1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->ZIP_FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->$VALUES:[Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->mType:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/czhj/volley/toolbox/DownloadItem$FileType;
    .locals 1

    const-class v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    return-object p0
.end method

.method public static values()[Lcom/czhj/volley/toolbox/DownloadItem$FileType;
    .locals 1

    sget-object v0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->$VALUES:[Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-virtual {v0}, [Lcom/czhj/volley/toolbox/DownloadItem$FileType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    return-object v0
.end method


# virtual methods
.method public getType()I
    .locals 1

    iget v0, p0, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->mType:I

    return v0
.end method
