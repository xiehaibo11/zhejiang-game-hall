.class public final Lcom/tkay/expressad/exoplayer/j/a/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/j/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/j/a/b$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x5000


# instance fields
.field private final b:Lcom/tkay/expressad/exoplayer/j/a/a;

.field private final c:J

.field private final d:I

.field private final e:Z

.field private f:Lcom/tkay/expressad/exoplayer/j/k;

.field private g:Ljava/io/File;

.field private h:Ljava/io/OutputStream;

.field private i:Ljava/io/FileOutputStream;

.field private j:J

.field private k:J

.field private l:Lcom/tkay/expressad/exoplayer/k/x;


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/j/a/a;)V
    .locals 6

    const-wide/32 v2, 0x200000

    const/16 v4, 0x5000

    const/4 v5, 0x1

    move-object v0, p0

    move-object v1, p1

    .line 77
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/j/a/b;-><init>(Lcom/tkay/expressad/exoplayer/j/a/a;JIZ)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/a/a;JI)V
    .locals 6

    const/4 v5, 0x1

    move-object v0, p0

    move-object v1, p1

    move-wide v2, p2

    move v4, p4

    .line 102
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/j/a/b;-><init>(Lcom/tkay/expressad/exoplayer/j/a/a;JIZ)V

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/a/a;JIZ)V
    .locals 0

    .line 115
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 116
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/exoplayer/j/a/a;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->b:Lcom/tkay/expressad/exoplayer/j/a/a;

    .line 117
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->c:J

    .line 118
    iput p4, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->d:I

    .line 119
    iput-boolean p5, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->e:Z

    return-void
.end method

.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/a/a;JZ)V
    .locals 6

    const/16 v4, 0x5000

    move-object v0, p0

    move-object v1, p1

    move-wide v2, p2

    move v5, p4

    .line 90
    invoke-direct/range {v0 .. v5}, Lcom/tkay/expressad/exoplayer/j/a/b;-><init>(Lcom/tkay/expressad/exoplayer/j/a/a;JIZ)V

    return-void
.end method

.method private b()V
    .locals 6

    .line 175
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/j/k;->g:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    .line 176
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v0, v0, Lcom/tkay/expressad/exoplayer/j/k;->g:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->k:J

    sub-long/2addr v0, v2

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->c:J

    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->min(JJ)J

    .line 177
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->b:Lcom/tkay/expressad/exoplayer/j/a/a;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    iget-object v1, v1, Lcom/tkay/expressad/exoplayer/j/k;->h:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    iget-wide v2, v2, Lcom/tkay/expressad/exoplayer/j/k;->e:J

    iget-wide v4, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->k:J

    add-long/2addr v2, v4

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/expressad/exoplayer/j/a/a;->c(Ljava/lang/String;J)Ljava/io/File;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    .line 179
    new-instance v0, Ljava/io/FileOutputStream;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    invoke-direct {v0, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->i:Ljava/io/FileOutputStream;

    .line 180
    iget v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->d:I

    if-lez v1, :cond_2

    .line 181
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->l:Lcom/tkay/expressad/exoplayer/k/x;

    if-nez v1, :cond_1

    .line 182
    new-instance v0, Lcom/tkay/expressad/exoplayer/k/x;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->i:Ljava/io/FileOutputStream;

    iget v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->d:I

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/exoplayer/k/x;-><init>(Ljava/io/OutputStream;I)V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->l:Lcom/tkay/expressad/exoplayer/k/x;

    goto :goto_0

    .line 185
    :cond_1
    invoke-virtual {v1, v0}, Lcom/tkay/expressad/exoplayer/k/x;->a(Ljava/io/OutputStream;)V

    .line 187
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->l:Lcom/tkay/expressad/exoplayer/k/x;

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    goto :goto_1

    .line 189
    :cond_2
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    :goto_1
    const-wide/16 v0, 0x0

    .line 191
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->j:J

    return-void
.end method

.method private c()V
    .locals 3

    .line 196
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    .line 202
    :try_start_0
    invoke-virtual {v0}, Ljava/io/OutputStream;->flush()V

    .line 203
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->e:Z

    if-eqz v0, :cond_1

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->i:Ljava/io/FileOutputStream;

    invoke-virtual {v0}, Ljava/io/FileOutputStream;->getFD()Ljava/io/FileDescriptor;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/FileDescriptor;->sync()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 208
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/io/Closeable;)V

    .line 209
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    .line 210
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    .line 211
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    .line 213
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->b:Lcom/tkay/expressad/exoplayer/j/a/a;

    invoke-interface {v1, v0}, Lcom/tkay/expressad/exoplayer/j/a/a;->a(Ljava/io/File;)V

    return-void

    :catchall_0
    move-exception v0

    .line 208
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    invoke-static {v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/io/Closeable;)V

    .line 209
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    .line 210
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    .line 211
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->g:Ljava/io/File;

    .line 215
    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 217
    throw v0
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 164
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    if-nez v0, :cond_0

    return-void

    .line 168
    :cond_0
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/a/b;->c()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 170
    new-instance v1, Lcom/tkay/expressad/exoplayer/j/a/b$a;

    invoke-direct {v1, v0}, Lcom/tkay/expressad/exoplayer/j/a/b$a;-><init>(Ljava/io/IOException;)V

    throw v1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/k;)V
    .locals 4

    .line 124
    iget-wide v0, p1, Lcom/tkay/expressad/exoplayer/j/k;->g:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const/4 v0, 0x2

    .line 125
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/j/k;->a(I)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 p1, 0x0

    .line 126
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    return-void

    .line 129
    :cond_0
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    const-wide/16 v0, 0x0

    .line 130
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->k:J

    .line 132
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/a/b;->b()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 134
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/a/b$a;

    invoke-direct {v0, p1}, Lcom/tkay/expressad/exoplayer/j/a/b$a;-><init>(Ljava/io/IOException;)V

    throw v0
.end method

.method public final a([BII)V
    .locals 7

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->f:Lcom/tkay/expressad/exoplayer/j/k;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-ge v0, p3, :cond_2

    .line 146
    :try_start_0
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->j:J

    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->c:J

    cmp-long v1, v1, v3

    if-nez v1, :cond_1

    .line 147
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/a/b;->c()V

    .line 148
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/j/a/b;->b()V

    :cond_1
    sub-int v1, p3, v0

    int-to-long v1, v1

    .line 150
    iget-wide v3, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->c:J

    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->j:J

    sub-long/2addr v3, v5

    invoke-static {v1, v2, v3, v4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    long-to-int v1, v1

    .line 152
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->h:Ljava/io/OutputStream;

    add-int v3, p2, v0

    invoke-virtual {v2, p1, v3, v1}, Ljava/io/OutputStream;->write([BII)V

    add-int/2addr v0, v1

    .line 154
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->j:J

    int-to-long v4, v1

    add-long/2addr v2, v4

    iput-wide v2, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->j:J

    .line 155
    iget-wide v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->k:J

    add-long/2addr v1, v4

    iput-wide v1, p0, Lcom/tkay/expressad/exoplayer/j/a/b;->k:J
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 158
    new-instance p2, Lcom/tkay/expressad/exoplayer/j/a/b$a;

    invoke-direct {p2, p1}, Lcom/tkay/expressad/exoplayer/j/a/b$a;-><init>(Ljava/io/IOException;)V

    throw p2

    :cond_2
    return-void
.end method
