.class Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Holder;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Holder"
.end annotation


# static fields
.field private static final INSTANCE:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 28
    new-instance v0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;-><init>(Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;)V

    sput-object v0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Holder;->INSTANCE:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$100()Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;
    .locals 1

    .line 27
    sget-object v0, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$Holder;->INSTANCE:Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;

    return-object v0
.end method
