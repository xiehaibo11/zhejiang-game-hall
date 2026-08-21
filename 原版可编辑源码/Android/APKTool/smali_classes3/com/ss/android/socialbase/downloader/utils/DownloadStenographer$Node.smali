.class Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer$Node;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "Node"
.end annotation


# instance fields
.field curBytes:J

.field next:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer$Node;

.field prev:Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer$Node;

.field when:J


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 115
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer$1;)V
    .locals 0

    .line 115
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/utils/DownloadStenographer$Node;-><init>()V

    return-void
.end method
