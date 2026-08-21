.class public final Lcom/czhj/wire/okio/HashingSink;
.super Lcom/czhj/wire/okio/ForwardingSink;


# instance fields
.field private final a:Ljava/security/MessageDigest;


# direct methods
.method private constructor <init>(Lcom/czhj/wire/okio/Sink;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/czhj/wire/okio/ForwardingSink;-><init>(Lcom/czhj/wire/okio/Sink;)V

    :try_start_0
    invoke-static {p2}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/okio/HashingSink;->a:Ljava/security/MessageDigest;
    :try_end_0
    .catch Ljava/security/NoSuchAlgorithmException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    new-instance p1, Ljava/lang/AssertionError;

    invoke-direct {p1}, Ljava/lang/AssertionError;-><init>()V

    throw p1
.end method

.method public static md5(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/HashingSink;
    .locals 2

    new-instance v0, Lcom/czhj/wire/okio/HashingSink;

    const-string v1, "MD5"

    invoke-direct {v0, p0, v1}, Lcom/czhj/wire/okio/HashingSink;-><init>(Lcom/czhj/wire/okio/Sink;Ljava/lang/String;)V

    return-object v0
.end method

.method public static sha1(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/HashingSink;
    .locals 2

    new-instance v0, Lcom/czhj/wire/okio/HashingSink;

    const-string v1, "SHA-1"

    invoke-direct {v0, p0, v1}, Lcom/czhj/wire/okio/HashingSink;-><init>(Lcom/czhj/wire/okio/Sink;Ljava/lang/String;)V

    return-object v0
.end method

.method public static sha256(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/HashingSink;
    .locals 2

    new-instance v0, Lcom/czhj/wire/okio/HashingSink;

    const-string v1, "SHA-256"

    invoke-direct {v0, p0, v1}, Lcom/czhj/wire/okio/HashingSink;-><init>(Lcom/czhj/wire/okio/Sink;Ljava/lang/String;)V

    return-object v0
.end method


# virtual methods
.method public hash()Lcom/czhj/wire/okio/ByteString;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/HashingSink;->a:Ljava/security/MessageDigest;

    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/wire/okio/ByteString;->of([B)Lcom/czhj/wire/okio/ByteString;

    move-result-object v0

    return-object v0
.end method

.method public write(Lcom/czhj/wire/okio/Buffer;J)V
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-wide v0, p1, Lcom/czhj/wire/okio/Buffer;->c:J

    const-wide/16 v2, 0x0

    move-wide v4, p2

    invoke-static/range {v0 .. v5}, Lcom/czhj/wire/okio/Util;->checkOffsetAndCount(JJJ)V

    iget-object v0, p1, Lcom/czhj/wire/okio/Buffer;->b:Lcom/czhj/wire/okio/Segment;

    const-wide/16 v1, 0x0

    :goto_0
    cmp-long v3, v1, p2

    if-gez v3, :cond_0

    sub-long v3, p2, v1

    iget v5, v0, Lcom/czhj/wire/okio/Segment;->e:I

    iget v6, v0, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v5, v6

    int-to-long v5, v5

    invoke-static {v3, v4, v5, v6}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v3

    long-to-int v3, v3

    iget-object v4, p0, Lcom/czhj/wire/okio/HashingSink;->a:Ljava/security/MessageDigest;

    iget-object v5, v0, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v6, v0, Lcom/czhj/wire/okio/Segment;->d:I

    invoke-virtual {v4, v5, v6, v3}, Ljava/security/MessageDigest;->update([BII)V

    int-to-long v3, v3

    add-long/2addr v1, v3

    iget-object v0, v0, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    goto :goto_0

    :cond_0
    invoke-super {p0, p1, p2, p3}, Lcom/czhj/wire/okio/ForwardingSink;->write(Lcom/czhj/wire/okio/Buffer;J)V

    return-void
.end method
