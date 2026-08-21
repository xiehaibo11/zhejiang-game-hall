.class Lcom/xiaomi/push/service/bl$b;
.super Lcom/xiaomi/push/cv;


# direct methods
.method protected constructor <init>(Landroid/content/Context;Lcom/xiaomi/push/cu;Lcom/xiaomi/push/cv$b;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/xiaomi/push/cv;-><init>(Landroid/content/Context;Lcom/xiaomi/push/cu;Lcom/xiaomi/push/cv$b;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected a(Ljava/util/ArrayList;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/String;"
        }
    .end annotation

    :try_start_0
    invoke-static {}, Lcom/xiaomi/push/fh;->a()Lcom/xiaomi/push/fh;

    move-result-object v0

    invoke-virtual {v0}, Lcom/xiaomi/push/fh;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/xiaomi/push/service/bv;->a()Ljava/lang/String;

    move-result-object p3

    :cond_0
    invoke-super {p0, p1, p2, p3, p4}, Lcom/xiaomi/push/cv;->a(Ljava/util/ArrayList;Ljava/lang/String;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    sget-object p2, Lcom/xiaomi/push/service/bl$b;->a:Landroid/content/Context;

    invoke-static {p2}, Lcom/xiaomi/push/bj;->c(Landroid/content/Context;)Z

    move-result p2

    const/4 p3, 0x0

    sget-object p4, Lcom/xiaomi/push/ez;->u:Lcom/xiaomi/push/ez;

    invoke-virtual {p4}, Lcom/xiaomi/push/ez;->a()I

    move-result p4

    const/4 v0, 0x1

    const/4 v1, 0x0

    invoke-static {p3, p4, v0, v1, p2}, Lcom/xiaomi/push/fj;->a(IIILjava/lang/String;I)V

    throw p1
.end method
