.class public final enum Lcom/kuaishou/weapon/p0/dm$a;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kuaishou/weapon/p0/dm;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/kuaishou/weapon/p0/dm$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/kuaishou/weapon/p0/dm$a;

.field public static final enum b:Lcom/kuaishou/weapon/p0/dm$a;

.field public static final enum c:Lcom/kuaishou/weapon/p0/dm$a;

.field private static final synthetic d:[Lcom/kuaishou/weapon/p0/dm$a;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/kuaishou/weapon/p0/dm$a;

    const/4 v1, 0x0

    const-string v2, "UNKNOWN"

    invoke-direct {v0, v2, v1}, Lcom/kuaishou/weapon/p0/dm$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kuaishou/weapon/p0/dm$a;->a:Lcom/kuaishou/weapon/p0/dm$a;

    new-instance v0, Lcom/kuaishou/weapon/p0/dm$a;

    const/4 v2, 0x1

    const-string v3, "ARMEABI_V7A"

    invoke-direct {v0, v3, v2}, Lcom/kuaishou/weapon/p0/dm$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kuaishou/weapon/p0/dm$a;->b:Lcom/kuaishou/weapon/p0/dm$a;

    new-instance v0, Lcom/kuaishou/weapon/p0/dm$a;

    const/4 v3, 0x2

    const-string v4, "ARM64_V8A"

    invoke-direct {v0, v4, v3}, Lcom/kuaishou/weapon/p0/dm$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/kuaishou/weapon/p0/dm$a;->c:Lcom/kuaishou/weapon/p0/dm$a;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/kuaishou/weapon/p0/dm$a;

    sget-object v5, Lcom/kuaishou/weapon/p0/dm$a;->a:Lcom/kuaishou/weapon/p0/dm$a;

    aput-object v5, v4, v1

    sget-object v1, Lcom/kuaishou/weapon/p0/dm$a;->b:Lcom/kuaishou/weapon/p0/dm$a;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/kuaishou/weapon/p0/dm$a;->d:[Lcom/kuaishou/weapon/p0/dm$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/kuaishou/weapon/p0/dm$a;
    .locals 1

    const-class v0, Lcom/kuaishou/weapon/p0/dm$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/kuaishou/weapon/p0/dm$a;

    return-object p0
.end method

.method public static values()[Lcom/kuaishou/weapon/p0/dm$a;
    .locals 1

    sget-object v0, Lcom/kuaishou/weapon/p0/dm$a;->d:[Lcom/kuaishou/weapon/p0/dm$a;

    invoke-virtual {v0}, [Lcom/kuaishou/weapon/p0/dm$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/kuaishou/weapon/p0/dm$a;

    return-object v0
.end method
