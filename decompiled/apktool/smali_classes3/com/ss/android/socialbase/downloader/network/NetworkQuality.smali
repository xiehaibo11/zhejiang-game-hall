.class public final enum Lcom/ss/android/socialbase/downloader/network/NetworkQuality;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/network/NetworkQuality;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

.field public static final enum EXCELLENT:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

.field public static final enum GOOD:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

.field public static final enum MODERATE:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

.field public static final enum POOR:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

.field public static final enum UNKNOWN:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 15
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v1, 0x0

    const-string v2, "POOR"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->POOR:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    .line 19
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v2, 0x1

    const-string v3, "MODERATE"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->MODERATE:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    .line 23
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v3, 0x2

    const-string v4, "GOOD"

    invoke-direct {v0, v4, v3}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->GOOD:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    .line 27
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v4, 0x3

    const-string v5, "EXCELLENT"

    invoke-direct {v0, v5, v4}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->EXCELLENT:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    .line 32
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v5, 0x4

    const-string v6, "UNKNOWN"

    invoke-direct {v0, v6, v5}, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->UNKNOWN:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    .line 11
    sget-object v7, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->POOR:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    aput-object v7, v6, v1

    sget-object v1, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->MODERATE:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    aput-object v1, v6, v2

    sget-object v1, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->GOOD:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    aput-object v1, v6, v3

    sget-object v1, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->EXCELLENT:Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->$VALUES:[Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 11
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/network/NetworkQuality;
    .locals 1

    .line 11
    const-class v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/network/NetworkQuality;
    .locals 1

    .line 11
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->$VALUES:[Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/network/NetworkQuality;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/network/NetworkQuality;

    return-object v0
.end method
