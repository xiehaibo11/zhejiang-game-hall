.class public final enum Lcom/ss/android/socialbase/downloader/constants/RunStatus;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/constants/RunStatus;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_ERROR:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

.field public static final enum RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public static final enum RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;


# direct methods
.method static constructor <clinit>()V
    .locals 12

    .line 9
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v1, 0x0

    const-string v2, "RUN_STATUS_NONE"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 10
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v2, 0x1

    const-string v3, "RUN_STATUS_PAUSE"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 11
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v3, 0x2

    const-string v4, "RUN_STATUS_CANCELED"

    invoke-direct {v0, v4, v3}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 12
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v4, 0x3

    const-string v5, "RUN_STATUS_ERROR"

    invoke-direct {v0, v5, v4}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ERROR:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 13
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v5, 0x4

    const-string v6, "RUN_STATUS_END_RIGHT_NOW"

    invoke-direct {v0, v6, v5}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 14
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v6, 0x5

    const-string v7, "RUN_STATUS_RETRY_DELAY"

    invoke-direct {v0, v7, v6}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 16
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v7, 0x6

    const-string v8, "RUN_STATUS_WAITING_ASYNC_HANDLER"

    invoke-direct {v0, v8, v7}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 17
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/4 v8, 0x7

    const-string v9, "RUN_STATUS_END_FOR_FILE_EXIST"

    invoke-direct {v0, v9, v8}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 18
    new-instance v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/16 v9, 0x8

    const-string v10, "RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET"

    invoke-direct {v0, v10, v9}, Lcom/ss/android/socialbase/downloader/constants/RunStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    const/16 v10, 0x9

    new-array v10, v10, [Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    .line 8
    sget-object v11, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_NONE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v11, v10, v1

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_PAUSE:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v2

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_CANCELED:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v3

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_ERROR:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v4

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_RIGHT_NOW:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v5

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_RETRY_DELAY:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v6

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_WAITING_ASYNC_HANDLER:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v7

    sget-object v1, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->RUN_STATUS_END_FOR_FILE_EXIST:Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    aput-object v1, v10, v8

    aput-object v0, v10, v9

    sput-object v10, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/RunStatus;

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

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/constants/RunStatus;
    .locals 1

    .line 8
    const-class v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/constants/RunStatus;
    .locals 1

    .line 8
    sget-object v0, Lcom/ss/android/socialbase/downloader/constants/RunStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/constants/RunStatus;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/constants/RunStatus;

    return-object v0
.end method
