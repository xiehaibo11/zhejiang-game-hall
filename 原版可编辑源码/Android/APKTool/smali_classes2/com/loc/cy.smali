.class public final Lcom/loc/cy;
.super Lcom/loc/cv;
.source "UploadBufferBuilder.java"


# static fields
.field private static b:Lcom/loc/cy;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/loc/cy;

    invoke-direct {v0}, Lcom/loc/cy;-><init>()V

    sput-object v0, Lcom/loc/cy;->b:Lcom/loc/cy;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    const/16 v0, 0x1400

    invoke-direct {p0, v0}, Lcom/loc/cv;-><init>(I)V

    return-void
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0
.end method

.method public static b()Lcom/loc/cy;
    .locals 1

    sget-object v0, Lcom/loc/cy;->b:Lcom/loc/cy;

    return-object v0
.end method


# virtual methods
.method public final a([B[BLjava/util/List;)[B
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([B[B",
            "Ljava/util/List<",
            "+",
            "Lcom/loc/dc;",
            ">;)[B"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p3, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    if-eqz p1, :cond_3

    invoke-virtual {p0}, Lcom/loc/cy;->a()Lcom/loc/cv;

    iget-object v2, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {v2, p1}, Lcom/loc/df;->a(Lcom/loc/gb;[B)I

    move-result p1

    new-array v2, v1, [I

    const/4 v3, 0x0

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v1, :cond_1

    invoke-interface {p3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/loc/dc;

    iget-object v6, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {v5}, Lcom/loc/dc;->b()[B

    move-result-object v7

    invoke-static {v6, v7}, Lcom/loc/dk;->a(Lcom/loc/gb;[B)I

    move-result v6

    iget-object v7, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {v5}, Lcom/loc/dc;->a()I

    move-result v5

    int-to-byte v5, v5

    invoke-static {v7, v5, v6}, Lcom/loc/dk;->a(Lcom/loc/gb;BI)I

    move-result v5

    aput v5, v2, v4

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    iget-object p3, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {p3, v2}, Lcom/loc/df;->a(Lcom/loc/gb;[I)I

    move-result p3

    if-eqz p2, :cond_2

    iget-object v1, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {v1, p2}, Lcom/loc/df;->b(Lcom/loc/gb;[B)I

    move-result v3

    :cond_2
    iget-object p2, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {p2, p1, v3, p3}, Lcom/loc/df;->a(Lcom/loc/gb;III)I

    move-result p1

    iget-object p2, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {p2, p1}, Lcom/loc/cx;->c(I)V

    iget-object p1, p0, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {p1}, Lcom/loc/cx;->c()[B

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-static {p1}, Lcom/loc/ej;->a(Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-object v0
.end method

.method public final c()[B
    .locals 18

    move-object/from16 v1, p0

    invoke-super/range {p0 .. p0}, Lcom/loc/cv;->a()Lcom/loc/cv;

    :try_start_0
    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v5

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->c()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v6

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->i()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v8

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->h()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v9

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->g()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/loc/cy;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v10

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->j()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/loc/cy;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v11

    invoke-static {}, Lcom/loc/eh;->n()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/loc/eg;->a(Ljava/lang/String;)J

    move-result-wide v12

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->l()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v14

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v15

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v16

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->e()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/loc/cx;->a(Ljava/lang/CharSequence;)I

    move-result v17

    iget-object v3, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-static {}, Lcom/loc/eh;->a()B

    move-result v4

    invoke-static {}, Lcom/loc/eh;->m()I

    move-result v0

    int-to-byte v7, v0

    invoke-static/range {v3 .. v17}, Lcom/loc/ei;->a(Lcom/loc/gb;BIIBIIIIJIIII)I

    move-result v0

    iget-object v2, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {v2, v0}, Lcom/loc/cx;->c(I)V

    iget-object v0, v1, Lcom/loc/cy;->a:Lcom/loc/cx;

    invoke-virtual {v0}, Lcom/loc/cx;->c()[B

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-static {v0}, Lcom/loc/ej;->a(Ljava/lang/Throwable;)V

    const/4 v0, 0x0

    :goto_0
    return-object v0
.end method
