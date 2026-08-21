.class Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "DnsRecord"
.end annotation


# instance fields
.field timestamp:J

.field value:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/net/InetAddress;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 145
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$1;)V
    .locals 0

    .line 145
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/network/DownloadDnsManager$DnsRecord;-><init>()V

    return-void
.end method
