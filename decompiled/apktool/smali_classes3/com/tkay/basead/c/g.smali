.class public final Lcom/tkay/basead/c/g;
.super Lcom/tkay/core/common/f/x;


# instance fields
.field a:Ljava/lang/String;

.field b:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Lcom/tkay/core/common/f/x;-><init>()V

    .line 32
    iput-object p2, p0, Lcom/tkay/basead/c/g;->a:Ljava/lang/String;

    .line 33
    iput-object p3, p0, Lcom/tkay/basead/c/g;->b:Ljava/lang/String;

    .line 34
    iput-object p1, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/basead/c/g;)Lcom/tkay/core/common/f/h;
    .locals 0

    .line 26
    iget-object p0, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    return-object p0
.end method


# virtual methods
.method public final a(Landroid/app/Activity;)V
    .locals 12

    const-string v0, "myoffer_confirm_msg"

    const-string v1, "string"

    const-string v2, "id"

    :try_start_0
    const-string v3, ""

    .line 42
    iget-object v4, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    instance-of v4, v4, Lcom/tkay/core/common/f/z;

    if-eqz v4, :cond_0

    .line 43
    iget-object v3, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    check-cast v3, Lcom/tkay/core/common/f/z;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/z;->aa()Ljava/lang/String;

    move-result-object v3

    .line 46
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 47
    iget-object v3, p0, Lcom/tkay/basead/c/g;->c:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->r()Ljava/lang/String;

    move-result-object v3

    .line 50
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    .line 52
    invoke-static {p1}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v5

    const-string v6, "myoffer_confirm_dialog"

    const-string v7, "layout"

    invoke-static {v4, v6, v7}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual {v5, v6, v7, v8}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object v5

    .line 54
    invoke-static {v4, v0, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v6

    invoke-virtual {v5, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    const-string v7, "myoffer_confirm_give_up"

    .line 55
    invoke-static {v4, v7, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    invoke-virtual {v5, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/TextView;

    const-string v9, "myoffer_confirm_continue"

    .line 56
    invoke-static {v4, v9, v2}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v5, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/TextView;

    .line 58
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v9

    invoke-static {v9, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v4, v0}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v0

    .line 59
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v9

    invoke-virtual {v9}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v9

    const-string v10, "myoffer_give_up"

    invoke-static {v9, v10, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v9

    invoke-virtual {v4, v9}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v9

    .line 60
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v10

    invoke-virtual {v10}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v10

    const-string v11, "myoffer_continue"

    invoke-static {v10, v11, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v4, v1}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 62
    new-instance v10, Ljava/lang/StringBuilder;

    invoke-direct {v10}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\""

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "\"?"

    invoke-virtual {v10, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v6, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 64
    invoke-virtual {v7, v9}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 66
    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 74
    new-instance v0, Landroid/app/Dialog;

    const-string v1, "style_full_screen_translucent_dialog"

    const-string v3, "style"

    invoke-static {v4, v1, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    invoke-direct {v0, p1, v1}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 75
    invoke-virtual {v0, v5}, Landroid/app/Dialog;->setContentView(Landroid/view/View;)V

    .line 76
    invoke-virtual {v0, v8}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 78
    new-instance p1, Lcom/tkay/basead/c/g$1;

    invoke-direct {p1, p0, v0}, Lcom/tkay/basead/c/g$1;-><init>(Lcom/tkay/basead/c/g;Landroid/app/Dialog;)V

    invoke-virtual {v7, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 91
    new-instance p1, Lcom/tkay/basead/c/g$2;

    invoke-direct {p1, p0, v4, v0}, Lcom/tkay/basead/c/g$2;-><init>(Lcom/tkay/basead/c/g;Landroid/content/Context;Landroid/app/Dialog;)V

    invoke-virtual {v2, p1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 108
    invoke-virtual {v0}, Landroid/app/Dialog;->show()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
