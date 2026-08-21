.class public final enum Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

.field public static final enum BYTE_INVALID_RETRY_STATUS_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

.field public static final enum BYTE_INVALID_RETRY_STATUS_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

.field public static final enum BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

.field public static final enum BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    .line 9
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    const/4 v1, 0x0

    const-string v2, "BYTE_INVALID_RETRY_STATUS_NONE"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 10
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    const/4 v2, 0x1

    const-string v3, "BYTE_INVALID_RETRY_STATUS_RESTART"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 11
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    const/4 v3, 0x2

    const-string v4, "BYTE_INVALID_RETRY_STATUS_DOWNLOADING"

    invoke-direct {v0, v4, v3}, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 12
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    const/4 v4, 0x3

    const-string v5, "BYTE_INVALID_RETRY_STATUS_DOWNLOADED"

    invoke-direct {v0, v5, v4}, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_DOWNLOADED:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    .line 8
    sget-object v6, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    aput-object v6, v5, v1

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_RESTART:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    aput-object v1, v5, v2

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->BYTE_INVALID_RETRY_STATUS_DOWNLOADING:Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

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

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;
    .locals 1

    .line 8
    const-class v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;
    .locals 1

    .line 8
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/constants/ByteInvalidRetryStatus;

    return-object v0
.end method
