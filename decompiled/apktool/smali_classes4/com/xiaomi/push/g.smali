.class public Lcom/xiaomi/push/g;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/util/Random;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    sput-object v0, Lcom/xiaomi/push/g;->a:Ljava/util/Random;

    return-void
.end method

.method public static final a(I)I
    .locals 1

    sget-object v0, Lcom/xiaomi/push/g;->a:Ljava/util/Random;

    invoke-static {p0}, Ljava/lang/Math;->abs(I)I

    move-result p0

    invoke-virtual {v0, p0}, Ljava/util/Random;->nextInt(I)I

    move-result p0

    return p0
.end method
