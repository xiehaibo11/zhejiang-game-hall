.class public Lcom/kwad/sdk/pngencrypt/a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Closeable;


# static fields
.field static final synthetic $assertionsDisabled:Z


# instance fields
.field private aDi:I

.field private aDj:Z

.field private aDk:J

.field private buf:[B

.field private eof:Z

.field private offset:I

.field private stream:Ljava/io/InputStream;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 1

    const/16 v0, 0x4000

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/pngencrypt/a;-><init>(Ljava/io/InputStream;I)V

    return-void
.end method

.method private constructor <init>(Ljava/io/InputStream;I)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/sdk/pngencrypt/a;->eof:Z

    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/kwad/sdk/pngencrypt/a;->aDj:Z

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/pngencrypt/a;->aDk:J

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/a;->stream:Ljava/io/InputStream;

    const/16 p1, 0x4000

    new-array p1, p1, [B

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/a;->buf:[B

    return-void
.end method

.method private Gl()V
    .locals 5

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    if-gtz v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/a;->eof:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    iput v0, p0, Lcom/kwad/sdk/pngencrypt/a;->offset:I

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/a;->stream:Ljava/io/InputStream;

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/a;->buf:[B

    invoke-virtual {v0, v1}, Ljava/io/InputStream;->read([B)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    if-nez v0, :cond_1

    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v1, "This should not happen: stream.read(buf) returned 0"

    invoke-direct {v0, v1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_1
    if-gez v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/sdk/pngencrypt/a;->close()V

    goto :goto_0

    :cond_2
    iget-wide v1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDk:J

    int-to-long v3, v0

    add-long/2addr v1, v3

    iput-wide v1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDk:J
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    new-instance v1, Lcom/kwad/sdk/pngencrypt/PngjException;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/Throwable;)V

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private a(Lcom/kwad/sdk/pngencrypt/f;I)I
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/a;->Gl()V

    if-lez p2, :cond_0

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    if-ge p2, v0, :cond_0

    goto :goto_0

    :cond_0
    iget p2, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    :goto_0
    const/4 v0, -0x1

    if-lez p2, :cond_4

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/a;->buf:[B

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/a;->offset:I

    invoke-interface {p1, v1, v2, p2}, Lcom/kwad/sdk/pngencrypt/f;->b([BII)I

    move-result p2

    if-lez p2, :cond_1

    iget v1, p0, Lcom/kwad/sdk/pngencrypt/a;->offset:I

    add-int/2addr v1, p2

    iput v1, p0, Lcom/kwad/sdk/pngencrypt/a;->offset:I

    iget v1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    sub-int/2addr v1, p2

    iput v1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    :cond_1
    if-lez p2, :cond_2

    return p2

    :cond_2
    invoke-interface {p1}, Lcom/kwad/sdk/pngencrypt/f;->isDone()Z

    move-result p1

    if-nez p1, :cond_3

    new-instance p1, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string p2, "This should not happen!"

    invoke-direct {p1, p2}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_3
    return v0

    :cond_4
    iget-boolean p2, p0, Lcom/kwad/sdk/pngencrypt/a;->eof:Z

    if-nez p2, :cond_5

    new-instance p2, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v1, "This should not happen"

    invoke-direct {p2, v1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    invoke-static {p2}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_5
    invoke-interface {p1}, Lcom/kwad/sdk/pngencrypt/f;->isDone()Z

    move-result p1

    if-eqz p1, :cond_6

    return v0

    :cond_6
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/pngencrypt/f;)I
    .locals 1

    const v0, 0x7fffffff

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/pngencrypt/a;->a(Lcom/kwad/sdk/pngencrypt/f;I)I

    move-result p1

    return p1
.end method

.method public final b(Lcom/kwad/sdk/pngencrypt/f;I)I
    .locals 2

    const/16 p2, 0x24

    move v0, p2

    :goto_0
    if-lez v0, :cond_1

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/pngencrypt/a;->a(Lcom/kwad/sdk/pngencrypt/f;I)I

    move-result v1

    if-gtz v1, :cond_0

    return v1

    :cond_0
    sub-int/2addr v0, v1

    goto :goto_0

    :cond_1
    return p2
.end method

.method public final bt(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDj:Z

    return-void
.end method

.method public close()V
    .locals 3

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/a;->eof:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/a;->buf:[B

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/sdk/pngencrypt/a;->aDi:I

    iput v1, p0, Lcom/kwad/sdk/pngencrypt/a;->offset:I

    iget-object v1, p0, Lcom/kwad/sdk/pngencrypt/a;->stream:Ljava/io/InputStream;

    if-eqz v1, :cond_0

    iget-boolean v2, p0, Lcom/kwad/sdk/pngencrypt/a;->aDj:Z

    if-eqz v2, :cond_0

    invoke-static {v1}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    :cond_0
    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/a;->stream:Ljava/io/InputStream;

    return-void
.end method
