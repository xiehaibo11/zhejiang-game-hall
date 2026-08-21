.class final Lcom/tkay/expressad/foundation/g/d/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/d/b;->b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/expressad/foundation/g/d/c;

.field final synthetic e:Z

.field final synthetic f:Lcom/tkay/expressad/foundation/g/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    .locals 0

    .line 157
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->d:Lcom/tkay/expressad/foundation/g/d/c;

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/tkay/expressad/foundation/g/d/b$1;->e:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 17

    move-object/from16 v0, p0

    .line 160
    new-instance v1, Ljava/io/File;

    iget-object v2, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->a:Ljava/lang/String;

    invoke-direct {v1, v2}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 161
    iget-object v2, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v3, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 162
    invoke-virtual {v2}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v3

    if-nez v3, :cond_0

    .line 163
    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v3, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->c:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->d:Lcom/tkay/expressad/foundation/g/d/c;

    invoke-static {v1, v3, v2, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Landroid/graphics/Bitmap;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 164
    :cond_0
    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_2

    .line 165
    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->a:Ljava/lang/String;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/a;->a(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 166
    invoke-virtual {v1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v2

    if-nez v2, :cond_1

    .line 167
    iget-object v2, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v3, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->b:Ljava/lang/String;

    invoke-virtual {v2, v3, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 168
    iget-object v2, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v3, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->c:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->d:Lcom/tkay/expressad/foundation/g/d/c;

    invoke-static {v2, v3, v1, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Landroid/graphics/Bitmap;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 170
    :cond_1
    iget-object v5, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v6, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->c:Ljava/lang/String;

    iget-object v7, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->b:Ljava/lang/String;

    iget-object v8, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->a:Ljava/lang/String;

    const/4 v9, 0x1

    iget-object v10, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->d:Lcom/tkay/expressad/foundation/g/d/c;

    invoke-static/range {v5 .. v10}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/expressad/foundation/g/d/c;)V

    return-void

    .line 173
    :cond_2
    iget-object v11, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->f:Lcom/tkay/expressad/foundation/g/d/b;

    iget-object v12, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->c:Ljava/lang/String;

    iget-object v13, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->b:Ljava/lang/String;

    iget-object v14, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->a:Ljava/lang/String;

    const/4 v15, 0x0

    iget-object v1, v0, Lcom/tkay/expressad/foundation/g/d/b$1;->d:Lcom/tkay/expressad/foundation/g/d/c;

    move-object/from16 v16, v1

    invoke-static/range {v11 .. v16}, Lcom/tkay/expressad/foundation/g/d/b;->a(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method
