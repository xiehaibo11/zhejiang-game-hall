.class public final enum Lcom/xiaomi/push/h$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/xiaomi/push/h$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/xiaomi/push/h$a;

.field private static final synthetic a:[Lcom/xiaomi/push/h$a;

.field public static final enum b:Lcom/xiaomi/push/h$a;

.field public static final enum c:Lcom/xiaomi/push/h$a;


# instance fields
.field private final a:I


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/xiaomi/push/h$a;

    const/4 v1, 0x0

    const-string v2, "UNKNOWN"

    invoke-direct {v0, v2, v1, v1}, Lcom/xiaomi/push/h$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/h$a;->a:Lcom/xiaomi/push/h$a;

    new-instance v0, Lcom/xiaomi/push/h$a;

    const/4 v2, 0x1

    const-string v3, "ALLOWED"

    invoke-direct {v0, v3, v2, v2}, Lcom/xiaomi/push/h$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/h$a;->b:Lcom/xiaomi/push/h$a;

    new-instance v0, Lcom/xiaomi/push/h$a;

    const/4 v3, 0x2

    const-string v4, "NOT_ALLOWED"

    invoke-direct {v0, v4, v3, v3}, Lcom/xiaomi/push/h$a;-><init>(Ljava/lang/String;II)V

    sput-object v0, Lcom/xiaomi/push/h$a;->c:Lcom/xiaomi/push/h$a;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/xiaomi/push/h$a;

    sget-object v5, Lcom/xiaomi/push/h$a;->a:Lcom/xiaomi/push/h$a;

    aput-object v5, v4, v1

    sget-object v1, Lcom/xiaomi/push/h$a;->b:Lcom/xiaomi/push/h$a;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/xiaomi/push/h$a;->a:[Lcom/xiaomi/push/h$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput p3, p0, Lcom/xiaomi/push/h$a;->a:I

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/xiaomi/push/h$a;
    .locals 1

    const-class v0, Lcom/xiaomi/push/h$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/xiaomi/push/h$a;

    return-object p0
.end method

.method public static values()[Lcom/xiaomi/push/h$a;
    .locals 1

    sget-object v0, Lcom/xiaomi/push/h$a;->a:[Lcom/xiaomi/push/h$a;

    invoke-virtual {v0}, [Lcom/xiaomi/push/h$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/xiaomi/push/h$a;

    return-object v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/xiaomi/push/h$a;->a:I

    return v0
.end method
