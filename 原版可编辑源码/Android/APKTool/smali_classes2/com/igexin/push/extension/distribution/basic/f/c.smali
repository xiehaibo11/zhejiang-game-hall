.class public Lcom/igexin/push/extension/distribution/basic/f/c;
.super Lcom/igexin/push/extension/distribution/basic/f/d;


# instance fields
.field private g:Ljava/lang/String;

.field private h:Lcom/igexin/push/core/bean/BaseAction;

.field private i:I

.field private j:Lcom/igexin/push/extension/distribution/basic/f/e;

.field private k:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;ILcom/igexin/push/extension/distribution/basic/f/e;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/igexin/push/extension/distribution/basic/f/d;-><init>(Ljava/lang/String;)V

    iput-object p4, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->h:Lcom/igexin/push/core/bean/BaseAction;

    iput-object p3, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->g:Ljava/lang/String;

    iput p5, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->i:I

    iput-object p6, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->j:Lcom/igexin/push/extension/distribution/basic/f/e;

    iput-object p2, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->k:Ljava/lang/String;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    new-instance v0, Ljava/io/File;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    :cond_0
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "/"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-virtual {v0}, Ljava/io/File;->mkdirs()Z

    :cond_1
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    iget v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->i:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->h:Lcom/igexin/push/core/bean/BaseAction;

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0, p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->e(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->h:Lcom/igexin/push/core/bean/BaseAction;

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0, p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->k(Ljava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Exception;)V
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->j:Lcom/igexin/push/extension/distribution/basic/f/e;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/igexin/push/extension/distribution/basic/f/e;->a(Ljava/lang/Exception;)V

    :cond_0
    return-void
.end method

.method public a([B)V
    .locals 5

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->f:Z

    iget-object v1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->h:Lcom/igexin/push/core/bean/BaseAction;

    invoke-virtual {v1}, Lcom/igexin/push/core/bean/BaseAction;->getActionId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iget-object v2, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->g:Ljava/lang/String;

    invoke-direct {p0, v2}, Lcom/igexin/push/extension/distribution/basic/f/c;->a(Ljava/lang/String;)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/extension/distribution/basic/c/e;->k:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->g:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "/"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "_"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->i:I

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ".bin"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/io/FileOutputStream;

    invoke-direct {v2, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V

    sget-object v3, Landroid/graphics/Bitmap$CompressFormat;->PNG:Landroid/graphics/Bitmap$CompressFormat;

    array-length v4, p1

    invoke-static {p1, v0, v4}, Landroid/graphics/BitmapFactory;->decodeByteArray([BII)Landroid/graphics/Bitmap;

    move-result-object p1

    if-eqz p1, :cond_0

    const/16 v0, 0x64

    invoke-virtual {p1, v3, v0, v2}, Landroid/graphics/Bitmap;->compress(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z

    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->recycle()V

    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/f/c;->b(Ljava/lang/String;)V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->f:Z

    new-instance p1, Landroid/content/ContentValues;

    invoke-direct {p1}, Landroid/content/ContentValues;-><init>()V

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->k:Ljava/lang/String;

    const-string v2, "imageurl"

    invoke-virtual {p1, v2, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "imagesrc"

    invoke-virtual {p1, v0, v1}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->g:Ljava/lang/String;

    const-string v1, "taskid"

    invoke-virtual {p1, v1, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    const-string v1, "createtime"

    invoke-virtual {p1, v1, v0}, Landroid/content/ContentValues;->put(Ljava/lang/String;Ljava/lang/Long;)V

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/c/c;->b()Lcom/igexin/push/extension/distribution/basic/e/a;

    move-result-object v0

    const-string v1, "image"

    invoke-virtual {v0, v1, p1}, Lcom/igexin/push/extension/distribution/basic/e/a;->a(Ljava/lang/String;Landroid/content/ContentValues;)V

    goto :goto_0

    :cond_0
    invoke-virtual {v2}, Ljava/io/FileOutputStream;->close()V

    iput-boolean v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->f:Z

    :goto_0
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->j:Lcom/igexin/push/extension/distribution/basic/f/e;

    if-eqz p1, :cond_2

    iget-boolean p1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->f:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->j:Lcom/igexin/push/extension/distribution/basic/f/e;

    iget-object v0, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->h:Lcom/igexin/push/core/bean/BaseAction;

    invoke-interface {p1, v0}, Lcom/igexin/push/extension/distribution/basic/f/e;->a(Lcom/igexin/push/core/bean/BaseAction;)V

    goto :goto_1

    :cond_1
    iget-object p1, p0, Lcom/igexin/push/extension/distribution/basic/f/c;->j:Lcom/igexin/push/extension/distribution/basic/f/e;

    new-instance v0, Ljava/lang/Exception;

    const-string v1, "no target existed or downloading bitmap failed!"

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    invoke-interface {p1, v0}, Lcom/igexin/push/extension/distribution/basic/f/e;->a(Ljava/lang/Exception;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public final b_()I
    .locals 1

    const v0, 0x10015

    return v0
.end method
