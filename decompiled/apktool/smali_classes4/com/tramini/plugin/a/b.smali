.class public Lcom/tramini/plugin/a/b;
.super Landroid/content/BroadcastReceiver;


# static fields
.field public static final a:Ljava/lang/String;

.field public static final b:Ljava/lang/String; = "tramini"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 36
    const-class v0, Lcom/tramini/plugin/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/a/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private a(Landroid/content/Intent;Lcom/tramini/plugin/b/a;)V
    .locals 10

    .line 93
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->f()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 94
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->g()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 95
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->h()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    .line 96
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->i()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 97
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->j()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 98
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 99
    invoke-virtual {p2}, Lcom/tramini/plugin/b/a;->l()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {p1, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v3

    .line 102
    new-instance p1, Lcom/tramini/plugin/a/b$1;

    move-object v1, p1

    move-object v2, p0

    move-object v5, p2

    move-object v6, v0

    invoke-direct/range {v1 .. v7}, Lcom/tramini/plugin/a/b$1;-><init>(Lcom/tramini/plugin/a/b;ILjava/lang/String;Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p2, v0, v9, v8, p1}, Lcom/tramini/plugin/a/g/a;->a(Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tramini/plugin/a/g/a$a;)V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 10

    .line 41
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    .line 54
    invoke-static {p1}, Lcom/tramini/plugin/b/b;->a(Landroid/content/Context;)Lcom/tramini/plugin/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tramini/plugin/b/b;->b()Lcom/tramini/plugin/b/a;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 60
    :cond_0
    invoke-static {}, Lcom/tramini/plugin/a/g/b;->a()Lcom/tramini/plugin/a/g/b;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tramini/plugin/a/g/b;->a(Lcom/tramini/plugin/b/a;)V

    .line 63
    invoke-static {p1}, Lcom/tramini/plugin/a/g/h;->a(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_1

    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->m()I

    move-result p1

    if-nez p1, :cond_1

    return-void

    .line 70
    :cond_1
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->d()Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 71
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-gtz v1, :cond_2

    goto :goto_0

    .line 75
    :cond_2
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    return-void

    .line 1093
    :cond_3
    :try_start_0
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->f()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 1094
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->g()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 1095
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->h()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    .line 1096
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->i()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 1097
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->j()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 1098
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 1099
    invoke-virtual {v0}, Lcom/tramini/plugin/b/a;->l()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v3

    .line 1102
    new-instance p2, Lcom/tramini/plugin/a/b$1;

    move-object v1, p2

    move-object v2, p0

    move-object v5, v0

    move-object v6, p1

    invoke-direct/range {v1 .. v7}, Lcom/tramini/plugin/a/b$1;-><init>(Lcom/tramini/plugin/a/b;ILjava/lang/String;Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v0, p1, v9, v8, p2}, Lcom/tramini/plugin/a/g/a;->a(Lcom/tramini/plugin/b/a;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tramini/plugin/a/g/a$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_4
    :goto_0
    return-void
.end method
