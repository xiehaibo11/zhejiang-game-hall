.class Lcom/ss/android/socialbase/downloader/segment/OutputStub;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/segment/IOutput;


# instance fields
.field private final output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

.field private final target:Lcom/ss/android/socialbase/downloader/segment/IOutput;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/segment/IOutput;Lcom/ss/android/socialbase/downloader/segment/IOutput;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/segment/OutputStub;->output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    .line 21
    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/segment/OutputStub;->target:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    return-void
.end method


# virtual methods
.method public write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 26
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/OutputStub;->target:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    iput-object v0, p1, Lcom/ss/android/socialbase/downloader/segment/Buffer;->output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    .line 27
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/segment/OutputStub;->output:Lcom/ss/android/socialbase/downloader/segment/IOutput;

    invoke-interface {v0, p1}, Lcom/ss/android/socialbase/downloader/segment/IOutput;->write(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V

    return-void
.end method
