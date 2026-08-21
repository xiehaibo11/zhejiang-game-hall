.class public Lcom/xiaomi/push/fp$a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Lcom/xiaomi/push/fp$c;

.field public static final a:Lcom/xiaomi/push/fp$d;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Lcom/xiaomi/push/fp$c;

    invoke-direct {v0}, Lcom/xiaomi/push/fp$c;-><init>()V

    sput-object v0, Lcom/xiaomi/push/fp$a;->a:Lcom/xiaomi/push/fp$c;

    new-instance v0, Lcom/xiaomi/push/fp$d;

    invoke-direct {v0}, Lcom/xiaomi/push/fp$d;-><init>()V

    sput-object v0, Lcom/xiaomi/push/fp$a;->a:Lcom/xiaomi/push/fp$d;

    return-void
.end method

.method public static a([B)[B
    .locals 1

    sget-object v0, Lcom/xiaomi/push/fp$a;->a:Lcom/xiaomi/push/fp$d;

    invoke-static {p0, v0}, Lcom/xiaomi/push/fp$a;->a([BLcom/xiaomi/push/fp$b;)[B

    move-result-object p0

    return-object p0
.end method

.method public static a([BLcom/xiaomi/push/fp$b;)[B
    .locals 2

    invoke-static {p0}, Lcom/xiaomi/push/fp;->a([B)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {p0}, Lcom/xiaomi/push/fp;->a([B)Lcom/xiaomi/push/fp;

    move-result-object p0

    invoke-static {p0}, Lcom/xiaomi/push/fp;->a(Lcom/xiaomi/push/fp;)B

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {p0}, Lcom/xiaomi/push/fp;->a(Lcom/xiaomi/push/fp;)B

    move-result v0

    invoke-interface {p1}, Lcom/xiaomi/push/fp$b;->a()B

    move-result v1

    if-eq v0, v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/xiaomi/push/fp;->a(Lcom/xiaomi/push/fp;)[B

    move-result-object v0

    invoke-static {p0}, Lcom/xiaomi/push/fp;->a(Lcom/xiaomi/push/fp;)I

    move-result p0

    invoke-interface {p1, v0, p0}, Lcom/xiaomi/push/fp$b;->a([BI)[B

    move-result-object p0

    return-object p0

    :cond_1
    :goto_0
    invoke-static {p0}, Lcom/xiaomi/push/fp;->a(Lcom/xiaomi/push/fp;)[B

    move-result-object p0

    :cond_2
    return-object p0
.end method
