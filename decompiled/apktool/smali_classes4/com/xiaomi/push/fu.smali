.class public Lcom/xiaomi/push/fu;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/xiaomi/push/gi;


# static fields
.field public static a:Z


# instance fields
.field private a:Lcom/xiaomi/push/fu$a;

.field private a:Lcom/xiaomi/push/fw;

.field private a:Lcom/xiaomi/push/fz;

.field private final a:Ljava/lang/String;

.field private a:Ljava/text/SimpleDateFormat;

.field private b:Lcom/xiaomi/push/fu$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/xiaomi/push/fw;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "hh:mm:ss aaa"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Ljava/text/SimpleDateFormat;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fw;

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fu$a;

    iput-object v0, p0, Lcom/xiaomi/push/fu;->b:Lcom/xiaomi/push/fu$a;

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fz;

    const-string v0, "[Slim] "

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Ljava/lang/String;

    iput-object p1, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fw;

    invoke-direct {p0}, Lcom/xiaomi/push/fu;->a()V

    return-void
.end method

.method static synthetic a(Lcom/xiaomi/push/fu;)Lcom/xiaomi/push/fu$a;
    .locals 0

    iget-object p0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fu$a;

    return-object p0
.end method

.method static synthetic a(Lcom/xiaomi/push/fu;)Lcom/xiaomi/push/fw;
    .locals 0

    iget-object p0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fw;

    return-object p0
.end method

.method static synthetic a(Lcom/xiaomi/push/fu;)Ljava/text/SimpleDateFormat;
    .locals 0

    iget-object p0, p0, Lcom/xiaomi/push/fu;->a:Ljava/text/SimpleDateFormat;

    return-object p0
.end method

.method private a()V
    .locals 2

    new-instance v0, Lcom/xiaomi/push/fu$a;

    const/4 v1, 0x1

    invoke-direct {v0, p0, v1}, Lcom/xiaomi/push/fu$a;-><init>(Lcom/xiaomi/push/fu;Z)V

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fu$a;

    new-instance v0, Lcom/xiaomi/push/fu$a;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/xiaomi/push/fu$a;-><init>(Lcom/xiaomi/push/fu;Z)V

    iput-object v0, p0, Lcom/xiaomi/push/fu;->b:Lcom/xiaomi/push/fu$a;

    iget-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fw;

    iget-object v1, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fu$a;

    invoke-virtual {v0, v1, v1}, Lcom/xiaomi/push/fw;->a(Lcom/xiaomi/push/gb;Lcom/xiaomi/push/gj;)V

    iget-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fw;

    iget-object v1, p0, Lcom/xiaomi/push/fu;->b:Lcom/xiaomi/push/fu$a;

    invoke-virtual {v0, v1, v1}, Lcom/xiaomi/push/fw;->b(Lcom/xiaomi/push/gb;Lcom/xiaomi/push/gj;)V

    new-instance v0, Lcom/xiaomi/push/fv;

    invoke-direct {v0, p0}, Lcom/xiaomi/push/fv;-><init>(Lcom/xiaomi/push/fu;)V

    iput-object v0, p0, Lcom/xiaomi/push/fu;->a:Lcom/xiaomi/push/fz;

    return-void
.end method
