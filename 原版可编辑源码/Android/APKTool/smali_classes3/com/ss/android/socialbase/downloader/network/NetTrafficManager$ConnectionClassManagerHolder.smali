.class Lcom/ss/android/socialbase/downloader/network/NetTrafficManager$ConnectionClassManagerHolder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "ConnectionClassManagerHolder"
.end annotation


# static fields
.field public static final instance:Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 58
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;-><init>(Lcom/ss/android/socialbase/downloader/network/NetTrafficManager$1;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/NetTrafficManager$ConnectionClassManagerHolder;->instance:Lcom/ss/android/socialbase/downloader/network/NetTrafficManager;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
