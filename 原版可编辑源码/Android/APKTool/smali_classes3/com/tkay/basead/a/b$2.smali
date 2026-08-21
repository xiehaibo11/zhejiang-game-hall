.class final Lcom/tkay/basead/a/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/h;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/basead/c/i;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f/h;ILcom/tkay/basead/c/i;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/tkay/basead/a/b$2;->a:Lcom/tkay/core/common/f/h;

    iput p2, p0, Lcom/tkay/basead/a/b$2;->b:I

    iput-object p3, p0, Lcom/tkay/basead/a/b$2;->c:Lcom/tkay/basead/c/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 135
    iget-object v0, p0, Lcom/tkay/basead/a/b$2;->a:Lcom/tkay/core/common/f/h;

    instance-of v1, v0, Lcom/tkay/core/common/f/r;

    if-eqz v1, :cond_2

    .line 136
    move-object v1, v0

    check-cast v1, Lcom/tkay/core/common/f/r;

    .line 138
    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 139
    iget v0, p0, Lcom/tkay/basead/a/b$2;->b:I

    iget-object v3, p0, Lcom/tkay/basead/a/b$2;->a:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/j;)Z

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v2

    .line 141
    :goto_0
    iget v3, p0, Lcom/tkay/basead/a/b$2;->b:I

    const/16 v4, 0x8

    const/4 v5, 0x0

    if-ne v3, v4, :cond_1

    .line 142
    new-instance v3, Lcom/tkay/basead/g/c;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/r;->P()Ljava/lang/String;

    move-result-object v4

    iget-object v6, p0, Lcom/tkay/basead/a/b$2;->c:Lcom/tkay/basead/c/i;

    iget-object v6, v6, Lcom/tkay/basead/c/i;->a:Ljava/lang/String;

    invoke-direct {v3, v4, v6, v0}, Lcom/tkay/basead/g/c;-><init>(Ljava/lang/String;Ljava/lang/String;Z)V

    invoke-virtual {v3, v2, v5}, Lcom/tkay/basead/g/c;->a(ILcom/tkay/core/common/h/k;)V

    .line 145
    :cond_1
    new-instance v0, Lcom/tkay/basead/g/b;

    iget v3, p0, Lcom/tkay/basead/a/b$2;->b:I

    iget-object v4, p0, Lcom/tkay/basead/a/b$2;->c:Lcom/tkay/basead/c/i;

    iget-object v4, v4, Lcom/tkay/basead/c/i;->a:Ljava/lang/String;

    invoke-direct {v0, v3, v1, v4}, Lcom/tkay/basead/g/b;-><init>(ILcom/tkay/core/common/f/r;Ljava/lang/String;)V

    .line 146
    iget-object v1, p0, Lcom/tkay/basead/a/b$2;->c:Lcom/tkay/basead/c/i;

    iget-object v1, v1, Lcom/tkay/basead/c/i;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/g/b;->b(Ljava/lang/String;)V

    .line 147
    invoke-virtual {v0, v2, v5}, Lcom/tkay/basead/g/b;->a(ILcom/tkay/core/common/h/k;)V

    goto :goto_1

    .line 149
    :cond_2
    iget v1, p0, Lcom/tkay/basead/a/b$2;->b:I

    check-cast v0, Lcom/tkay/core/common/f/z;

    iget-object v2, p0, Lcom/tkay/basead/a/b$2;->c:Lcom/tkay/basead/c/i;

    invoke-static {v1, v0, v2}, Lcom/tkay/basead/a/j;->a(ILcom/tkay/core/common/f/z;Lcom/tkay/basead/c/i;)V

    .line 151
    :goto_1
    iget v0, p0, Lcom/tkay/basead/a/b$2;->b:I

    const/16 v1, 0x15

    if-ne v0, v1, :cond_4

    .line 152
    iget-object v0, p0, Lcom/tkay/basead/a/b$2;->a:Lcom/tkay/core/common/f/h;

    .line 1228
    instance-of v1, v0, Lcom/tkay/core/common/f/f;

    if-eqz v1, :cond_4

    .line 1229
    check-cast v0, Lcom/tkay/core/common/f/f;

    .line 1230
    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->c()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_4

    .line 1231
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    const-string v2, ",packagename:"

    if-eqz v1, :cond_3

    .line 1232
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "check offer installed(Apk Install Broadcast):true,dsp offerid:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1233
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/a/b;->c(Lcom/tkay/core/common/f/f;)V

    return-void

    .line 1235
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, "check offer installed(Apk Install Broadcast):false,dsp offerid:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_4
    return-void
.end method
