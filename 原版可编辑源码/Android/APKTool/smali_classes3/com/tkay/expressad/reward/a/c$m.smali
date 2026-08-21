.class final Lcom/tkay/expressad/reward/a/c$m;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "m"
.end annotation


# static fields
.field private static final a:Lcom/tkay/expressad/reward/a/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 2044
    new-instance v0, Lcom/tkay/expressad/reward/a/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/tkay/expressad/reward/a/c;-><init>(B)V

    sput-object v0, Lcom/tkay/expressad/reward/a/c$m;->a:Lcom/tkay/expressad/reward/a/c;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 2043
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a()Lcom/tkay/expressad/reward/a/c;
    .locals 1

    .line 2043
    sget-object v0, Lcom/tkay/expressad/reward/a/c$m;->a:Lcom/tkay/expressad/reward/a/c;

    return-object v0
.end method
