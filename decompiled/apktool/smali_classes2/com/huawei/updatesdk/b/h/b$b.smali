.class public final enum Lcom/huawei/updatesdk/b/h/b$b;
.super Ljava/lang/Enum;
.source ""


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/updatesdk/b/h/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "b"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/updatesdk/b/h/b$b;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/huawei/updatesdk/b/h/b$b;

.field public static final enum b:Lcom/huawei/updatesdk/b/h/b$b;

.field public static final enum c:Lcom/huawei/updatesdk/b/h/b$b;

.field private static final synthetic d:[Lcom/huawei/updatesdk/b/h/b$b;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    new-instance v0, Lcom/huawei/updatesdk/b/h/b$b;

    const/4 v1, 0x0

    const-string v2, "NOT_INSTALLED"

    invoke-direct {v0, v2, v1}, Lcom/huawei/updatesdk/b/h/b$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/updatesdk/b/h/b$b;->a:Lcom/huawei/updatesdk/b/h/b$b;

    new-instance v0, Lcom/huawei/updatesdk/b/h/b$b;

    const/4 v2, 0x1

    const-string v3, "INSTALLED"

    invoke-direct {v0, v3, v2}, Lcom/huawei/updatesdk/b/h/b$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/updatesdk/b/h/b$b;->b:Lcom/huawei/updatesdk/b/h/b$b;

    new-instance v0, Lcom/huawei/updatesdk/b/h/b$b;

    const/4 v3, 0x2

    const-string v4, "INSTALLED_LOWCODE"

    invoke-direct {v0, v4, v3}, Lcom/huawei/updatesdk/b/h/b$b;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/updatesdk/b/h/b$b;->c:Lcom/huawei/updatesdk/b/h/b$b;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/huawei/updatesdk/b/h/b$b;

    sget-object v5, Lcom/huawei/updatesdk/b/h/b$b;->a:Lcom/huawei/updatesdk/b/h/b$b;

    aput-object v5, v4, v1

    sget-object v1, Lcom/huawei/updatesdk/b/h/b$b;->b:Lcom/huawei/updatesdk/b/h/b$b;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/huawei/updatesdk/b/h/b$b;->d:[Lcom/huawei/updatesdk/b/h/b$b;

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

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/updatesdk/b/h/b$b;
    .locals 1

    const-class v0, Lcom/huawei/updatesdk/b/h/b$b;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/updatesdk/b/h/b$b;

    return-object p0
.end method

.method public static values()[Lcom/huawei/updatesdk/b/h/b$b;
    .locals 1

    sget-object v0, Lcom/huawei/updatesdk/b/h/b$b;->d:[Lcom/huawei/updatesdk/b/h/b$b;

    invoke-virtual {v0}, [Lcom/huawei/updatesdk/b/h/b$b;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/updatesdk/b/h/b$b;

    return-object v0
.end method
