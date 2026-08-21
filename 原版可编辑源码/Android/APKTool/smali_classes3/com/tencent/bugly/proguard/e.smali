.class public final Lcom/tencent/bugly/proguard/e;
.super Lcom/tencent/bugly/proguard/d;
.source "BUGLY"


# static fields
.field static h:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "[B>;"
        }
    .end annotation
.end field

.field static i:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "[B>;>;"
        }
    .end annotation
.end field


# instance fields
.field protected g:Lcom/tencent/bugly/proguard/g;

.field private j:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 18
    invoke-direct {p0}, Lcom/tencent/bugly/proguard/d;-><init>()V

    .line 14
    new-instance v0, Lcom/tencent/bugly/proguard/g;

    invoke-direct {v0}, Lcom/tencent/bugly/proguard/g;-><init>()V

    iput-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    const/4 v0, 0x0

    .line 259
    iput v0, p0, Lcom/tencent/bugly/proguard/e;->j:I

    .line 19
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    const/4 v1, 0x2

    iput-short v1, v0, Lcom/tencent/bugly/proguard/g;->a:S

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/Object;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "TT;)V"
        }
    .end annotation

    const-string v0, "."

    .line 32
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 35
    invoke-super {p0, p1, p2}, Lcom/tencent/bugly/proguard/d;->a(Ljava/lang/String;Ljava/lang/Object;)V

    return-void

    .line 33
    :cond_0
    new-instance p2, Ljava/lang/IllegalArgumentException;

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "put name can not startwith . , now is "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p2
.end method

.method public final a([B)V
    .locals 4

    .line 144
    array-length v0, p1

    const/4 v1, 0x4

    if-lt v0, v1, :cond_3

    .line 149
    :try_start_0
    new-instance v0, Lcom/tencent/bugly/proguard/k;

    const/4 v1, 0x0

    invoke-direct {v0, p1, v1}, Lcom/tencent/bugly/proguard/k;-><init>([BB)V

    .line 150
    iget-object p1, p0, Lcom/tencent/bugly/proguard/e;->c:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/tencent/bugly/proguard/k;->a(Ljava/lang/String;)I

    .line 2238
    iget-object p1, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    invoke-virtual {p1, v0}, Lcom/tencent/bugly/proguard/g;->a(Lcom/tencent/bugly/proguard/k;)V

    .line 152
    iget-object p1, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-short p1, p1, Lcom/tencent/bugly/proguard/g;->a:S
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v0, 0x3

    const-string v2, ""

    if-ne p1, v0, :cond_1

    .line 153
    :try_start_1
    new-instance p1, Lcom/tencent/bugly/proguard/k;

    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->g:[B

    invoke-direct {p1, v0}, Lcom/tencent/bugly/proguard/k;-><init>([B)V

    .line 154
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tencent/bugly/proguard/k;->a(Ljava/lang/String;)I

    .line 155
    sget-object v0, Lcom/tencent/bugly/proguard/e;->h:Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 156
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 157
    sput-object v0, Lcom/tencent/bugly/proguard/e;->h:Ljava/util/HashMap;

    new-array v3, v1, [B

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 159
    :cond_0
    sget-object v0, Lcom/tencent/bugly/proguard/e;->h:Ljava/util/HashMap;

    invoke-virtual {p1, v0, v1, v1}, Lcom/tencent/bugly/proguard/k;->a(Ljava/util/Map;IZ)Ljava/util/HashMap;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/e;->e:Ljava/util/HashMap;

    return-void

    .line 161
    :cond_1
    new-instance p1, Lcom/tencent/bugly/proguard/k;

    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->g:[B

    invoke-direct {p1, v0}, Lcom/tencent/bugly/proguard/k;-><init>([B)V

    .line 162
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->c:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tencent/bugly/proguard/k;->a(Ljava/lang/String;)I

    .line 163
    sget-object v0, Lcom/tencent/bugly/proguard/e;->i:Ljava/util/HashMap;

    if-nez v0, :cond_2

    .line 164
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tencent/bugly/proguard/e;->i:Ljava/util/HashMap;

    .line 165
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 166
    new-array v3, v1, [B

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 167
    sget-object v3, Lcom/tencent/bugly/proguard/e;->i:Ljava/util/HashMap;

    invoke-virtual {v3, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 169
    :cond_2
    sget-object v0, Lcom/tencent/bugly/proguard/e;->i:Ljava/util/HashMap;

    invoke-virtual {p1, v0, v1, v1}, Lcom/tencent/bugly/proguard/k;->a(Ljava/util/Map;IZ)Ljava/util/HashMap;

    move-result-object p1

    iput-object p1, p0, Lcom/tencent/bugly/proguard/e;->a:Ljava/util/HashMap;

    .line 170
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/tencent/bugly/proguard/e;->b:Ljava/util/HashMap;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 173
    new-instance v0, Ljava/lang/RuntimeException;

    invoke-direct {v0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/Throwable;)V

    throw v0

    .line 145
    :cond_3
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "decode package must include size head"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final a()[B
    .locals 4

    .line 50
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-short v0, v0, Lcom/tencent/bugly/proguard/g;->a:S

    const/4 v1, 0x2

    const-string v2, ""

    if-ne v0, v1, :cond_2

    .line 51
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->e:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 54
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->f:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 55
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "funcName can not is null"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 52
    :cond_1
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "servantName can not is null"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0

    .line 58
    :cond_2
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->e:Ljava/lang/String;

    if-nez v0, :cond_3

    .line 59
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iput-object v2, v0, Lcom/tencent/bugly/proguard/g;->e:Ljava/lang/String;

    .line 61
    :cond_3
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-object v0, v0, Lcom/tencent/bugly/proguard/g;->f:Ljava/lang/String;

    if-nez v0, :cond_4

    .line 62
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iput-object v2, v0, Lcom/tencent/bugly/proguard/g;->f:Ljava/lang/String;

    .line 65
    :cond_4
    :goto_0
    new-instance v0, Lcom/tencent/bugly/proguard/l;

    const/4 v2, 0x0

    invoke-direct {v0, v2}, Lcom/tencent/bugly/proguard/l;-><init>(I)V

    .line 66
    iget-object v3, p0, Lcom/tencent/bugly/proguard/e;->c:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;)I

    .line 67
    iget-object v3, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iget-short v3, v3, Lcom/tencent/bugly/proguard/g;->a:S

    if-ne v3, v1, :cond_5

    .line 68
    iget-object v1, p0, Lcom/tencent/bugly/proguard/e;->a:Ljava/util/HashMap;

    invoke-virtual {v0, v1, v2}, Lcom/tencent/bugly/proguard/l;->a(Ljava/util/Map;I)V

    goto :goto_1

    .line 70
    :cond_5
    iget-object v1, p0, Lcom/tencent/bugly/proguard/e;->e:Ljava/util/HashMap;

    invoke-virtual {v0, v1, v2}, Lcom/tencent/bugly/proguard/l;->a(Ljava/util/Map;I)V

    .line 72
    :goto_1
    iget-object v1, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    .line 1032
    iget-object v0, v0, Lcom/tencent/bugly/proguard/l;->a:Ljava/nio/ByteBuffer;

    .line 72
    invoke-static {v0}, Lcom/tencent/bugly/proguard/n;->a(Ljava/nio/ByteBuffer;)[B

    move-result-object v0

    iput-object v0, v1, Lcom/tencent/bugly/proguard/g;->g:[B

    .line 73
    new-instance v0, Lcom/tencent/bugly/proguard/l;

    invoke-direct {v0, v2}, Lcom/tencent/bugly/proguard/l;-><init>(I)V

    .line 74
    iget-object v1, p0, Lcom/tencent/bugly/proguard/e;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tencent/bugly/proguard/l;->a(Ljava/lang/String;)I

    .line 1234
    iget-object v1, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    invoke-virtual {v1, v0}, Lcom/tencent/bugly/proguard/g;->a(Lcom/tencent/bugly/proguard/l;)V

    .line 2032
    iget-object v0, v0, Lcom/tencent/bugly/proguard/l;->a:Ljava/nio/ByteBuffer;

    .line 76
    invoke-static {v0}, Lcom/tencent/bugly/proguard/n;->a(Ljava/nio/ByteBuffer;)[B

    move-result-object v0

    .line 77
    array-length v1, v0

    add-int/lit8 v1, v1, 0x4

    .line 78
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v2

    .line 79
    invoke-virtual {v2, v1}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    move-result-object v1

    invoke-virtual {v1, v0}, Ljava/nio/ByteBuffer;->put([B)Ljava/nio/ByteBuffer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 80
    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    return-object v0
.end method

.method public final b()V
    .locals 2

    .line 42
    invoke-super {p0}, Lcom/tencent/bugly/proguard/d;->b()V

    .line 43
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    const/4 v1, 0x3

    iput-short v1, v0, Lcom/tencent/bugly/proguard/g;->a:S

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 194
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iput-object p1, v0, Lcom/tencent/bugly/proguard/g;->e:Ljava/lang/String;

    return-void
.end method

.method public final c()V
    .locals 2

    .line 230
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    const/4 v1, 0x1

    iput v1, v0, Lcom/tencent/bugly/proguard/g;->d:I

    return-void
.end method

.method public final c(Ljava/lang/String;)V
    .locals 1

    .line 212
    iget-object v0, p0, Lcom/tencent/bugly/proguard/e;->g:Lcom/tencent/bugly/proguard/g;

    iput-object p1, v0, Lcom/tencent/bugly/proguard/g;->f:Ljava/lang/String;

    return-void
.end method
