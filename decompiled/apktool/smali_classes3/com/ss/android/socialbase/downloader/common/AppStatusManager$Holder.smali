.class Lcom/ss/android/socialbase/downloader/common/AppStatusManager$Holder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/common/AppStatusManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Holder"
.end annotation


# static fields
.field private static final INSTANCE:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 42
    new-instance v0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;-><init>(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$1;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$Holder;->INSTANCE:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;
    .locals 1

    .line 41
    sget-object v0, Lcom/ss/android/socialbase/downloader/common/AppStatusManager$Holder;->INSTANCE:Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    return-object v0
.end method
