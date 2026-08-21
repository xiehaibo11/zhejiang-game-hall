.class final Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$InstanceHolder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "InstanceHolder"
.end annotation


# static fields
.field private static final INSTANCE:Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 197
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;-><init>(Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$1;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$InstanceHolder;->INSTANCE:Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 196
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$100()Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;
    .locals 1

    .line 196
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool$InstanceHolder;->INSTANCE:Lcom/ss/android/socialbase/downloader/network/connectionpool/DownloadConnectionPool;

    return-object v0
.end method
