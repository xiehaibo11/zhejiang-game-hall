.class final Lcom/tkay/expressad/advanced/c/a$7;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/c/a;->f(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/expressad/advanced/c/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/c/a;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 705
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    const/4 p1, 0x2

    iput p1, p0, Lcom/tkay/expressad/advanced/c/a$7;->b:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    const/4 v0, 0x0

    .line 712
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v1

    .line 713
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 714
    :try_start_1
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_2

    .line 715
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->i:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v1

    .line 716
    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/p;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 717
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 718
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v3

    :cond_0
    const-string v4, ".html"

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 721
    new-instance v4, Ljava/io/File;

    invoke-direct {v4, v1, v3}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 722
    :try_start_2
    invoke-virtual {v4}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    .line 723
    new-instance v1, Ljava/io/FileOutputStream;

    invoke-direct {v1, v4}, Ljava/io/FileOutputStream;-><init>(Ljava/io/File;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 725
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "<script>"

    .line 726
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->a()Lcom/tkay/expressad/d/b/a;

    invoke-static {}, Lcom/tkay/expressad/d/b/a;->b()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "</script>"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 727
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 728
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/io/FileOutputStream;->write([B)V

    .line 729
    invoke-virtual {v1}, Ljava/io/FileOutputStream;->flush()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    move-object v0, v1

    goto :goto_0

    :catchall_0
    move-exception v0

    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    goto/16 :goto_4

    :catch_0
    move-exception v0

    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    goto :goto_2

    :cond_1
    :goto_0
    move-object v2, v4

    goto :goto_1

    :catch_1
    move-exception v1

    goto :goto_2

    :cond_2
    :goto_1
    if-eqz v0, :cond_4

    .line 740
    :try_start_4
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    goto :goto_3

    :catch_2
    move-exception v1

    move-object v4, v2

    goto :goto_2

    :catchall_1
    move-exception v1

    goto :goto_4

    :catch_3
    move-exception v1

    move-object v4, v0

    .line 735
    :goto_2
    :try_start_5
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 736
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    const-string v2, ""

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/foundation/d/c;->j(Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    if-eqz v0, :cond_3

    .line 740
    :try_start_6
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V

    :cond_3
    move-object v2, v4

    .line 743
    :cond_4
    :goto_3
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {v2}, Ljava/io/File;->isFile()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {v2}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 744
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$7;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/lang/String;)V

    .line 745
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 747
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/advanced/c/a$7$1;

    invoke-direct {v1, p0, v2}, Lcom/tkay/expressad/advanced/c/a$7$1;-><init>(Lcom/tkay/expressad/advanced/c/a$7;Ljava/io/File;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void

    .line 754
    :cond_5
    invoke-static {}, Lcom/tkay/expressad/advanced/c/a;->d()Ljava/lang/String;

    .line 755
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    const-string v1, "html file write failed"

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v2}, Lcom/tkay/expressad/advanced/c/a;->c(Lcom/tkay/expressad/advanced/c/a;)Ljava/lang/String;

    iget v2, p0, Lcom/tkay/expressad/advanced/c/a$7;->b:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void

    :goto_4
    if-eqz v0, :cond_6

    .line 740
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V

    .line 742
    :cond_6
    throw v1
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    :catch_4
    move-exception v0

    .line 759
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/a$7;->c:Lcom/tkay/expressad/advanced/c/a;

    invoke-static {v2}, Lcom/tkay/expressad/advanced/c/a;->c(Lcom/tkay/expressad/advanced/c/a;)Ljava/lang/String;

    iget v2, p0, Lcom/tkay/expressad/advanced/c/a$7;->b:I

    invoke-static {v1, v0, v2}, Lcom/tkay/expressad/advanced/c/a;->a(Lcom/tkay/expressad/advanced/c/a;Ljava/lang/String;I)V

    return-void
.end method
