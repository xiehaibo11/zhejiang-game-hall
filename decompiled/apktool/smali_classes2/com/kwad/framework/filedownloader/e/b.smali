.class public final Lcom/kwad/framework/filedownloader/e/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/e/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/e/b$a;
    }
.end annotation


# instance fields
.field private final aeD:Ljava/io/BufferedOutputStream;

.field private final aeE:Ljava/io/RandomAccessFile;

.field private final fd:Ljava/io/FileDescriptor;


# direct methods
.method constructor <init>(Ljava/io/File;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/io/RandomAccessFile;

    const-string v1, "rw"

    invoke-direct {v0, p1, v1}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeE:Ljava/io/RandomAccessFile;

    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->getFD()Ljava/io/FileDescriptor;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/e/b;->fd:Ljava/io/FileDescriptor;

    new-instance p1, Ljava/io/BufferedOutputStream;

    new-instance v0, Ljava/io/FileOutputStream;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/e/b;->aeE:Ljava/io/RandomAccessFile;

    invoke-virtual {v1}, Ljava/io/RandomAccessFile;->getFD()Ljava/io/FileDescriptor;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/FileDescriptor;)V

    invoke-direct {p1, v0}, Ljava/io/BufferedOutputStream;-><init>(Ljava/io/OutputStream;)V

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/e/b;->aeD:Ljava/io/BufferedOutputStream;

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeD:Ljava/io/BufferedOutputStream;

    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->close()V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeE:Ljava/io/RandomAccessFile;

    invoke-virtual {v0}, Ljava/io/RandomAccessFile;->close()V

    return-void
.end method

.method public final seek(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeE:Ljava/io/RandomAccessFile;

    invoke-virtual {v0, p1, p2}, Ljava/io/RandomAccessFile;->seek(J)V

    return-void
.end method

.method public final setLength(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeE:Ljava/io/RandomAccessFile;

    invoke-virtual {v0, p1, p2}, Ljava/io/RandomAccessFile;->setLength(J)V

    return-void
.end method

.method public final vJ()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->aeD:Ljava/io/BufferedOutputStream;

    invoke-virtual {v0}, Ljava/io/BufferedOutputStream;->flush()V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/e/b;->fd:Ljava/io/FileDescriptor;

    invoke-virtual {v0}, Ljava/io/FileDescriptor;->sync()V

    return-void
.end method

.method public final write([BII)V
    .locals 1

    iget-object p2, p0, Lcom/kwad/framework/filedownloader/e/b;->aeD:Ljava/io/BufferedOutputStream;

    const/4 v0, 0x0

    invoke-virtual {p2, p1, v0, p3}, Ljava/io/BufferedOutputStream;->write([BII)V

    return-void
.end method
