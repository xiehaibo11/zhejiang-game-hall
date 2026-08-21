.class public final enum Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

.field public static final enum CONTINUE:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

.field public static final enum RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 8
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    const/4 v1, 0x0

    const-string v2, "RETURN"

    invoke-direct {v0, v2, v1}, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    .line 9
    new-instance v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    const/4 v2, 0x1

    const-string v3, "CONTINUE"

    invoke-direct {v0, v3, v2}, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->CONTINUE:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    .line 7
    sget-object v4, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->RETURN:Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

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

.method public static valueOf(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    .locals 1

    .line 7
    const-class v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object p0
.end method

.method public static values()[Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
    .locals 1

    .line 7
    sget-object v0, Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->$VALUES:[Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    invoke-virtual {v0}, [Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;

    return-object v0
.end method
