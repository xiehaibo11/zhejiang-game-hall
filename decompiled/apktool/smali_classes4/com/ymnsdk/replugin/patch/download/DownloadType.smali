.class public final enum Lcom/ymnsdk/replugin/patch/download/DownloadType;
.super Ljava/lang/Enum;
.source "DownloadType.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ymnsdk/replugin/patch/download/DownloadType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadType;

.field public static final enum HOST_APK:Lcom/ymnsdk/replugin/patch/download/DownloadType;

.field public static final enum PLUGIN_PATCH:Lcom/ymnsdk/replugin/patch/download/DownloadType;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 4
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;

    const/4 v1, 0x0

    const-string v2, "HOST_APK"

    invoke-direct {v0, v2, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;->HOST_APK:Lcom/ymnsdk/replugin/patch/download/DownloadType;

    .line 5
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;

    const/4 v2, 0x1

    const-string v3, "PLUGIN_PATCH"

    invoke-direct {v0, v3, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;->PLUGIN_PATCH:Lcom/ymnsdk/replugin/patch/download/DownloadType;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/ymnsdk/replugin/patch/download/DownloadType;

    .line 3
    sget-object v4, Lcom/ymnsdk/replugin/patch/download/DownloadType;->HOST_APK:Lcom/ymnsdk/replugin/patch/download/DownloadType;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/ymnsdk/replugin/patch/download/DownloadType;->$VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 3
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadType;
    .locals 1

    .line 3
    const-class v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ymnsdk/replugin/patch/download/DownloadType;

    return-object p0
.end method

.method public static values()[Lcom/ymnsdk/replugin/patch/download/DownloadType;
    .locals 1

    .line 3
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadType;->$VALUES:[Lcom/ymnsdk/replugin/patch/download/DownloadType;

    invoke-virtual {v0}, [Lcom/ymnsdk/replugin/patch/download/DownloadType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ymnsdk/replugin/patch/download/DownloadType;

    return-object v0
.end method
