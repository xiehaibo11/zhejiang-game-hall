.class public final enum Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/constants/EnqueueType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field public static final enum ENQUEUE_HEAD:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field public static final enum ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

.field public static final enum ENQUEUE_TAIL:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 9
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    const/4 v1, 0x0

    const-string v2, "ENQUEUE_NONE"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 10
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    const/4 v2, 0x1

    const-string v3, "ENQUEUE_HEAD"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_HEAD:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 11
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    const/4 v3, 0x2

    const-string v4, "ENQUEUE_TAIL"

    invoke-direct {v0, v4, v3}, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_TAIL:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    .line 8
    sget-object v5, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_NONE:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    aput-object v5, v4, v1

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->ENQUEUE_HEAD:Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 8
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
    .locals 1

    .line 8
    const-class v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/constants/EnqueueType;
    .locals 1

    .line 8
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/constants/EnqueueType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/constants/EnqueueType;

    return-object v0
.end method
