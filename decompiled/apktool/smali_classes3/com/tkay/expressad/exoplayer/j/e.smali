.class public final Lcom/tkay/expressad/exoplayer/j/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/h;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/j/e$a;
    }
.end annotation


# instance fields
.field private final a:Landroid/content/ContentResolver;

.field private final b:Lcom/tkay/expressad/exoplayer/j/aa;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/e;",
            ">;"
        }
    .end annotation
.end field

.field private c:Landroid/net/Uri;

.field private d:Landroid/content/res/AssetFileDescriptor;

.field private e:Ljava/io/FileInputStream;

.field private f:J

.field private g:Z


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    .line 60
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/j/e;-><init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/expressad/exoplayer/j/aa;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/exoplayer/j/aa<",
            "-",
            "Lcom/tkay/expressad/exoplayer/j/e;",
            ">;)V"
        }
    .end annotation

    .line 67
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 68
    invoke-virtual {p1}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->a:Landroid/content/ContentResolver;

    .line 69
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    return-void
.end method


# virtual methods
.method public final a([BII)I
    .locals 8

    if-nez p3, :cond_0

    const/4 p1, 0x0

    return p1

    .line 118
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    const/4 v3, -0x1

    if-nez v2, :cond_1

    return v3

    :cond_1
    const-wide/16 v4, -0x1

    cmp-long v2, v0, v4

    if-nez v2, :cond_2

    goto :goto_0

    :cond_2
    int-to-long v6, p3

    .line 125
    :try_start_0
    invoke-static {v0, v1, v6, v7}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    long-to-int p3, v0

    .line 126
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    invoke-virtual {v0, p1, p2, p3}, Ljava/io/FileInputStream;->read([BII)I

    move-result p1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    if-ne p1, v3, :cond_4

    .line 132
    iget-wide p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    cmp-long p1, p1, v4

    if-nez p1, :cond_3

    return v3

    .line 134
    :cond_3
    new-instance p1, Lcom/tkay/expressad/exoplayer/j/e$a;

    new-instance p2, Ljava/io/EOFException;

    invoke-direct {p2}, Ljava/io/EOFException;-><init>()V

    invoke-direct {p1, p2}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw p1

    .line 138
    :cond_4
    iget-wide p2, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    cmp-long v0, p2, v4

    if-eqz v0, :cond_5

    int-to-long v0, p1

    sub-long/2addr p2, v0

    .line 139
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    .line 141
    :cond_5
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz p2, :cond_6

    .line 142
    invoke-interface {p2, p1}, Lcom/tkay/expressad/exoplayer/j/aa;->a(I)V

    :cond_6
    return p1

    :catch_0
    move-exception p1

    .line 128
    new-instance p2, Lcom/tkay/expressad/exoplayer/j/e$a;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw p2
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;)J
    .locals 6

    .line 75
    :try_start_0
    iget-object v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->c:Landroid/net/Uri;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->c:Landroid/net/Uri;

    .line 76
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->a:Landroid/content/ContentResolver;

    const-string v2, "r"

    invoke-virtual {v1, v0, v2}, Landroid/content/ContentResolver;->openAssetFileDescriptor(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    if-eqz v0, :cond_5

    .line 80
    new-instance v0, Ljava/io/FileInputStream;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    invoke-virtual {v1}, Landroid/content/res/AssetFileDescriptor;->getFileDescriptor()Ljava/io/FileDescriptor;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/FileInputStream;-><init>(Ljava/io/FileDescriptor;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    .line 81
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    invoke-virtual {v0}, Landroid/content/res/AssetFileDescriptor;->getStartOffset()J

    move-result-wide v0

    .line 82
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    iget-wide v3, p1, Lcom/tkay/expressad/exoplayer/j/k;->f:J

    add-long/2addr v3, v0

    invoke-virtual {v2, v3, v4}, Ljava/io/FileInputStream;->skip(J)J

    move-result-wide v2

    sub-long/2addr v2, v0

    .line 83
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->f:J

    cmp-long v0, v2, v0

    if-nez v0, :cond_4

    .line 88
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->g:J

    const-wide/16 v4, -0x1

    cmp-long v0, v0, v4

    if-eqz v0, :cond_0

    .line 89
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->g:J

    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    goto :goto_1

    .line 91
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    invoke-virtual {p1}, Landroid/content/res/AssetFileDescriptor;->getLength()J

    move-result-wide v0

    cmp-long p1, v0, v4

    if-nez p1, :cond_2

    .line 95
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    invoke-virtual {p1}, Ljava/io/FileInputStream;->getChannel()Ljava/nio/channels/FileChannel;

    move-result-object p1

    .line 96
    invoke-virtual {p1}, Ljava/nio/channels/FileChannel;->size()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-nez v2, :cond_1

    goto :goto_0

    .line 97
    :cond_1
    invoke-virtual {p1}, Ljava/nio/channels/FileChannel;->position()J

    move-result-wide v2

    sub-long v4, v0, v2

    :goto_0
    iput-wide v4, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    goto :goto_1

    :cond_2
    sub-long/2addr v0, v2

    .line 99
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    :goto_1
    const/4 p1, 0x1

    .line 106
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    .line 107
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz p1, :cond_3

    .line 108
    invoke-interface {p1}, Lcom/tkay/expressad/exoplayer/j/aa;->b()V

    .line 111
    :cond_3
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->f:J

    return-wide v0

    .line 86
    :cond_4
    :try_start_1
    new-instance p1, Ljava/io/EOFException;

    invoke-direct {p1}, Ljava/io/EOFException;-><init>()V

    throw p1

    .line 78
    :cond_5
    new-instance p1, Ljava/io/FileNotFoundException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "Could not open file descriptor for: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->c:Landroid/net/Uri;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/io/FileNotFoundException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    move-exception p1

    .line 103
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/e$a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw v0
.end method

.method public final a()Landroid/net/Uri;
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->c:Landroid/net/Uri;

    return-object v0
.end method

.method public final b()V
    .locals 4

    const/4 v0, 0x0

    .line 154
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->c:Landroid/net/Uri;

    const/4 v1, 0x0

    .line 156
    :try_start_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    if-eqz v2, :cond_0

    .line 157
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    invoke-virtual {v2}, Ljava/io/FileInputStream;->close()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 162
    :cond_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    .line 164
    :try_start_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    if-eqz v2, :cond_1

    .line 165
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    invoke-virtual {v2}, Landroid/content/res/AssetFileDescriptor;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 170
    :cond_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    .line 171
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    if-eqz v0, :cond_2

    .line 172
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz v0, :cond_2

    .line 174
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/aa;->c()V

    :cond_2
    return-void

    :catchall_0
    move-exception v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 168
    :try_start_2
    new-instance v3, Lcom/tkay/expressad/exoplayer/j/e$a;

    invoke-direct {v3, v2}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 170
    :goto_0
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    .line 171
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    if-eqz v0, :cond_3

    .line 172
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz v0, :cond_3

    .line 174
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/aa;->c()V

    .line 177
    :cond_3
    throw v2

    :catchall_1
    move-exception v2

    goto :goto_1

    :catch_1
    move-exception v2

    .line 160
    :try_start_3
    new-instance v3, Lcom/tkay/expressad/exoplayer/j/e$a;

    invoke-direct {v3, v2}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    .line 162
    :goto_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->e:Ljava/io/FileInputStream;

    .line 164
    :try_start_4
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    if-eqz v3, :cond_4

    .line 165
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    invoke-virtual {v3}, Landroid/content/res/AssetFileDescriptor;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 170
    :cond_4
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    .line 171
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    if-eqz v0, :cond_5

    .line 172
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz v0, :cond_5

    .line 174
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/aa;->c()V

    .line 178
    :cond_5
    throw v2

    :catchall_2
    move-exception v2

    goto :goto_2

    :catch_2
    move-exception v2

    .line 168
    :try_start_5
    new-instance v3, Lcom/tkay/expressad/exoplayer/j/e$a;

    invoke-direct {v3, v2}, Lcom/tkay/expressad/exoplayer/j/e$a;-><init>(Ljava/io/IOException;)V

    throw v3
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 170
    :goto_2
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->d:Landroid/content/res/AssetFileDescriptor;

    .line 171
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    if-eqz v0, :cond_6

    .line 172
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/j/e;->g:Z

    .line 173
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/e;->b:Lcom/tkay/expressad/exoplayer/j/aa;

    if-eqz v0, :cond_6

    .line 174
    invoke-interface {v0}, Lcom/tkay/expressad/exoplayer/j/aa;->c()V

    .line 177
    :cond_6
    throw v2
.end method
