.class final Lcom/tkay/expressad/exoplayer/k/b$a;
.super Ljava/io/OutputStream;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/k/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/io/FileOutputStream;

.field private b:Z


# direct methods
.method public constructor <init>(Ljava/io/File;)V
    .locals 1

    .line 160
    invoke-direct {p0}, Ljava/io/OutputStream;-><init>()V

    const/4 v0, 0x0

    .line 158
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->b:Z

    .line 161
    new-instance v0, Ljava/io/FileOutputStream;

    invoke-direct {v0, p1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    return-void
.end method


# virtual methods
.method public final close()V
    .locals 3

    .line 166
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->b:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 169
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->b:Z

    .line 170
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/k/b$a;->flush()V

    .line 172
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->getFD()Ljava/io/FileDescriptor;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/FileDescriptor;->sync()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    const-string v1, "AtomicFile"

    const-string v2, "Failed to sync file descriptor:"

    .line 174
    invoke-static {v1, v2, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 176
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V

    return-void
.end method

.method public final flush()V
    .locals 1

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->flush()V

    return-void
.end method

.method public final write(I)V
    .locals 1

    .line 186
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0, p1}, Ljava/io/FileOutputStream;->write(I)V

    return-void
.end method

.method public final write([B)V
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0, p1}, Ljava/io/FileOutputStream;->write([B)V

    return-void
.end method

.method public final write([BII)V
    .locals 1

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/b$a;->a:Ljava/io/FileOutputStream;

    invoke-virtual {v0, p1, p2, p3}, Ljava/io/FileOutputStream;->write([BII)V

    return-void
.end method
