.class final Lcom/tkay/expressad/exoplayer/j/a/g;
.super Ljava/lang/Object;


# static fields
.field private static final c:I = 0x2

.field private static final d:I = 0x7fffffff


# instance fields
.field public final a:I

.field public final b:Ljava/lang/String;

.field private final e:Ljava/util/TreeSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/TreeSet<",
            "Lcom/tkay/expressad/exoplayer/j/a/n;",
            ">;"
        }
    .end annotation
.end field

.field private f:Lcom/tkay/expressad/exoplayer/j/a/l;

.field private g:Z


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 77
    iput p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    .line 78
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    .line 79
    sget-object p1, Lcom/tkay/expressad/exoplayer/j/a/l;->b:Lcom/tkay/expressad/exoplayer/j/a/l;

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    .line 80
    new-instance p1, Ljava/util/TreeSet;

    invoke-direct {p1}, Ljava/util/TreeSet;-><init>()V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    return-void
.end method

.method public static a(ILjava/io/DataInputStream;)Lcom/tkay/expressad/exoplayer/j/a/g;
    .locals 3

    .line 56
    invoke-virtual {p1}, Ljava/io/DataInputStream;->readInt()I

    move-result v0

    .line 57
    invoke-virtual {p1}, Ljava/io/DataInputStream;->readUTF()Ljava/lang/String;

    move-result-object v1

    .line 58
    new-instance v2, Lcom/tkay/expressad/exoplayer/j/a/g;

    invoke-direct {v2, v0, v1}, Lcom/tkay/expressad/exoplayer/j/a/g;-><init>(ILjava/lang/String;)V

    const/4 v0, 0x2

    if-ge p0, v0, :cond_0

    .line 60
    invoke-virtual {p1}, Ljava/io/DataInputStream;->readLong()J

    move-result-wide p0

    .line 61
    new-instance v0, Lcom/tkay/expressad/exoplayer/j/a/k;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/j/a/k;-><init>()V

    .line 62
    invoke-static {v0, p0, p1}, Lcom/tkay/expressad/exoplayer/j/a/j;->a(Lcom/tkay/expressad/exoplayer/j/a/k;J)V

    .line 63
    invoke-virtual {v2, v0}, Lcom/tkay/expressad/exoplayer/j/a/g;->a(Lcom/tkay/expressad/exoplayer/j/a/k;)Z

    goto :goto_0

    .line 65
    :cond_0
    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/io/DataInputStream;)Lcom/tkay/expressad/exoplayer/j/a/l;

    move-result-object p0

    iput-object p0, v2, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    :goto_0
    return-object v2
.end method


# virtual methods
.method public final a(I)I
    .locals 5

    .line 223
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    mul-int/lit8 v0, v0, 0x1f

    .line 224
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    const/4 v1, 0x2

    if-ge p1, v1, :cond_0

    .line 226
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    invoke-static {p1}, Lcom/tkay/expressad/exoplayer/j/a/j;->a(Lcom/tkay/expressad/exoplayer/j/a/i;)J

    move-result-wide v1

    mul-int/lit8 v0, v0, 0x1f

    const/16 p1, 0x20

    ushr-long v3, v1, p1

    xor-long/2addr v1, v3

    long-to-int p1, v1

    goto :goto_0

    :cond_0
    mul-int/lit8 v0, v0, 0x1f

    .line 229
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->hashCode()I

    move-result p1

    :goto_0
    add-int/2addr v0, p1

    return v0
.end method

.method public final a(JJ)J
    .locals 10

    .line 156
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/j/a/g;->a(J)Lcom/tkay/expressad/exoplayer/j/a/n;

    move-result-object v0

    .line 157
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/a/n;->b()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 159
    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/j/a/n;->a()Z

    move-result p1

    if-eqz p1, :cond_0

    const-wide p1, 0x7fffffffffffffffL

    goto :goto_0

    :cond_0
    iget-wide p1, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->c:J

    :goto_0
    invoke-static {p1, p2, p3, p4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    neg-long p1, p1

    return-wide p1

    :cond_1
    add-long v1, p1, p3

    .line 162
    iget-wide v3, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->b:J

    iget-wide v5, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->c:J

    add-long/2addr v3, v5

    cmp-long v5, v3, v1

    if-gez v5, :cond_3

    .line 164
    iget-object v5, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    const/4 v6, 0x0

    invoke-virtual {v5, v0, v6}, Ljava/util/TreeSet;->tailSet(Ljava/lang/Object;Z)Ljava/util/NavigableSet;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/NavigableSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/exoplayer/j/a/n;

    .line 165
    iget-wide v6, v5, Lcom/tkay/expressad/exoplayer/j/a/n;->b:J

    cmp-long v6, v6, v3

    if-gtz v6, :cond_3

    .line 171
    iget-wide v6, v5, Lcom/tkay/expressad/exoplayer/j/a/n;->b:J

    iget-wide v8, v5, Lcom/tkay/expressad/exoplayer/j/a/n;->c:J

    add-long/2addr v6, v8

    invoke-static {v3, v4, v6, v7}, Ljava/lang/Math;->max(JJ)J

    move-result-wide v3

    cmp-long v5, v3, v1

    if-ltz v5, :cond_2

    :cond_3
    sub-long/2addr v3, p1

    .line 178
    invoke-static {v3, v4, p3, p4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    return-wide p1
.end method

.method public final a()Lcom/tkay/expressad/exoplayer/j/a/i;
    .locals 1

    .line 97
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    return-object v0
.end method

.method public final a(J)Lcom/tkay/expressad/exoplayer/j/a/n;
    .locals 6

    .line 136
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/j/a/n;->a(Ljava/lang/String;J)Lcom/tkay/expressad/exoplayer/j/a/n;

    move-result-object v0

    .line 137
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v1, v0}, Ljava/util/TreeSet;->floor(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/j/a/n;

    if-eqz v1, :cond_0

    .line 138
    iget-wide v2, v1, Lcom/tkay/expressad/exoplayer/j/a/n;->b:J

    iget-wide v4, v1, Lcom/tkay/expressad/exoplayer/j/a/n;->c:J

    add-long/2addr v2, v4

    cmp-long v2, v2, p1

    if-lez v2, :cond_0

    return-object v1

    .line 141
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v1, v0}, Ljava/util/TreeSet;->ceiling(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/exoplayer/j/a/n;

    if-nez v0, :cond_1

    .line 142
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    invoke-static {v0, p1, p2}, Lcom/tkay/expressad/exoplayer/j/a/n;->b(Ljava/lang/String;J)Lcom/tkay/expressad/exoplayer/j/a/n;

    move-result-object p1

    return-object p1

    .line 143
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    iget-wide v2, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->b:J

    sub-long/2addr v2, p1

    invoke-static {v1, p1, p2, v2, v3}, Lcom/tkay/expressad/exoplayer/j/a/n;->a(Ljava/lang/String;JJ)Lcom/tkay/expressad/exoplayer/j/a/n;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/a/n;)V
    .locals 1

    .line 123
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v0, p1}, Ljava/util/TreeSet;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Ljava/io/DataOutputStream;)V
    .locals 1

    .line 90
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    invoke-virtual {p1, v0}, Ljava/io/DataOutputStream;->writeInt(I)V

    .line 91
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/io/DataOutputStream;->writeUTF(Ljava/lang/String;)V

    .line 92
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Ljava/io/DataOutputStream;)V

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 118
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->g:Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/a/e;)Z
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v0, p1}, Ljava/util/TreeSet;->remove(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 212
    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/j/a/e;->e:Ljava/io/File;

    invoke-virtual {p1}, Ljava/io/File;->delete()Z

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/j/a/k;)Z
    .locals 1

    .line 106
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    .line 107
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->a(Lcom/tkay/expressad/exoplayer/j/a/k;)Lcom/tkay/expressad/exoplayer/j/a/l;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    .line 108
    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/j/a/l;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b(Lcom/tkay/expressad/exoplayer/j/a/n;)Lcom/tkay/expressad/exoplayer/j/a/n;
    .locals 4

    .line 191
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v0, p1}, Ljava/util/TreeSet;->remove(Ljava/lang/Object;)Z

    move-result v0

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 193
    iget v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/exoplayer/j/a/n;->a(I)Lcom/tkay/expressad/exoplayer/j/a/n;

    move-result-object v0

    .line 195
    iget-object v1, p1, Lcom/tkay/expressad/exoplayer/j/a/n;->e:Ljava/io/File;

    iget-object v2, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->e:Ljava/io/File;

    invoke-virtual {v1, v2}, Ljava/io/File;->renameTo(Ljava/io/File;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 200
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {p1, v0}, Ljava/util/TreeSet;->add(Ljava/lang/Object;)Z

    return-object v0

    .line 196
    :cond_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/j/a/a$a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Renaming of "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/j/a/n;->e:Ljava/io/File;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " to "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, v0, Lcom/tkay/expressad/exoplayer/j/a/n;->e:Ljava/io/File;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, " failed."

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/tkay/expressad/exoplayer/j/a/a$a;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method public final b()Z
    .locals 1

    .line 113
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->g:Z

    return v0
.end method

.method public final c()Ljava/util/TreeSet;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/TreeSet<",
            "Lcom/tkay/expressad/exoplayer/j/a/n;",
            ">;"
        }
    .end annotation

    .line 128
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    return-object v0
.end method

.method public final d()Z
    .locals 1

    .line 206
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v0}, Ljava/util/TreeSet;->isEmpty()Z

    move-result v0

    return v0
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-eqz p1, :cond_2

    .line 246
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_1

    goto :goto_0

    .line 249
    :cond_1
    check-cast p1, Lcom/tkay/expressad/exoplayer/j/a/g;

    .line 250
    iget v2, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    iget v3, p1, Lcom/tkay/expressad/exoplayer/j/a/g;->a:I

    if-ne v2, v3, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/j/a/g;->b:Ljava/lang/String;

    .line 251
    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    iget-object v3, p1, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    .line 252
    invoke-virtual {v2, v3}, Ljava/util/TreeSet;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    iget-object p1, p1, Lcom/tkay/expressad/exoplayer/j/a/g;->f:Lcom/tkay/expressad/exoplayer/j/a/l;

    .line 253
    invoke-virtual {v2, p1}, Lcom/tkay/expressad/exoplayer/j/a/l;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    return v0

    :cond_2
    :goto_0
    return v1
.end method

.method public final hashCode()I
    .locals 2

    const v0, 0x7fffffff

    .line 236
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/j/a/g;->a(I)I

    move-result v0

    mul-int/lit8 v0, v0, 0x1f

    .line 237
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/j/a/g;->e:Ljava/util/TreeSet;

    invoke-virtual {v1}, Ljava/util/TreeSet;->hashCode()I

    move-result v1

    add-int/2addr v0, v1

    return v0
.end method
