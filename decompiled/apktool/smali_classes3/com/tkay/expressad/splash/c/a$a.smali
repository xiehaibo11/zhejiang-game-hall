.class final Lcom/tkay/expressad/splash/c/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/tkay/expressad/splash/c/a;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 19
    new-instance v0, Lcom/tkay/expressad/splash/c/a;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/splash/c/a;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/splash/c/a$a;->a:Lcom/tkay/expressad/splash/c/a;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/splash/c/a;
    .locals 1

    .line 18
    sget-object v0, Lcom/tkay/expressad/splash/c/a$a;->a:Lcom/tkay/expressad/splash/c/a;

    return-object v0
.end method
