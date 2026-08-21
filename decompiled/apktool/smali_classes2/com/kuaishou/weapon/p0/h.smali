.class public Lcom/kuaishou/weapon/p0/h;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "re_po_rt"

.field private static e:Lcom/kuaishou/weapon/p0/h;


# instance fields
.field private b:Landroid/content/SharedPreferences;

.field private c:Landroid/content/SharedPreferences$Editor;

.field private d:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->d:Landroid/content/Context;

    const-string v0, "re_po_rt"

    const/4 v1, 0x4

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    :try_start_0
    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->d:Landroid/content/Context;

    const/4 v0, 0x4

    invoke-virtual {p1, p2, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p1

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {p1}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a()Lcom/kuaishou/weapon/p0/h;
    .locals 1

    sget-object v0, Lcom/kuaishou/weapon/p0/h;->e:Lcom/kuaishou/weapon/p0/h;

    return-object v0
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;)Lcom/kuaishou/weapon/p0/h;
    .locals 2

    const-class v0, Lcom/kuaishou/weapon/p0/h;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kuaishou/weapon/p0/h;->e:Lcom/kuaishou/weapon/p0/h;

    if-nez v1, :cond_1

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sget-object v1, Lcom/kuaishou/weapon/p0/h;->e:Lcom/kuaishou/weapon/p0/h;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kuaishou/weapon/p0/h;

    invoke-direct {v1, p0, p1}, Lcom/kuaishou/weapon/p0/h;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    sput-object v1, Lcom/kuaishou/weapon/p0/h;->e:Lcom/kuaishou/weapon/p0/h;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p0

    :cond_1
    :goto_0
    sget-object p0, Lcom/kuaishou/weapon/p0/h;->e:Lcom/kuaishou/weapon/p0/h;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    monitor-exit v0

    return-object p0

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method


# virtual methods
.method public a(Ljava/lang/String;J)J
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide p1

    return-wide p1
.end method

.method public a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    const-string v1, ""

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public a(Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/h;->d:Landroid/content/Context;

    return-void
.end method

.method public a(Ljava/lang/String;I)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public a(Ljava/lang/String;IZ)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    if-eqz p3, :cond_0

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/Boolean;)V
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-virtual {p2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1

    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    if-eqz p3, :cond_0

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public b(Ljava/lang/String;)I
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v1, p1, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return v0
.end method

.method public b(Ljava/lang/String;I)I
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return p2
.end method

.method public b()Landroid/content/Context;
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->d:Landroid/content/Context;

    return-object v0
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public b(Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 1

    const-string v0, ""

    invoke-virtual {p0, p1, v0}, Lcom/kuaishou/weapon/p0/h;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p3, :cond_0

    const/4 p2, 0x2

    invoke-static {p1, p2}, Lcom/kuaishou/weapon/p0/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    move-object p2, p1

    :cond_1
    :goto_0
    return-object p2
.end method

.method public b(Ljava/lang/String;J)V
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public c(Ljava/lang/String;)I
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v1, p1, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return v0
.end method

.method public c(Ljava/lang/String;I)I
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    return p2
.end method

.method public c()V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public c(Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1

    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p3, :cond_0

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 p3, 0x2

    invoke-static {p2, p3}, Lcom/kuaishou/weapon/p0/c;->b([BI)Ljava/lang/String;

    move-result-object p2

    :cond_0
    iget-object p3, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p3, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public d(Ljava/lang/String;)J
    .locals 3

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    const-wide/16 v1, 0x0

    invoke-interface {v0, p1, v1, v2}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v0

    return-wide v0
.end method

.method public d(Ljava/lang/String;I)V
    .locals 1

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/h;->c:Landroid/content/SharedPreferences$Editor;

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public e(Ljava/lang/String;)Z
    .locals 2

    iget-object v0, p0, Lcom/kuaishou/weapon/p0/h;->b:Landroid/content/SharedPreferences;

    const/4 v1, 0x0

    invoke-interface {v0, p1, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result p1

    return p1
.end method
