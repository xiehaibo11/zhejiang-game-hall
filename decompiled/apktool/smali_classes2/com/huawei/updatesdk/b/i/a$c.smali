.class public final enum Lcom/huawei/updatesdk/b/i/a$c;
.super Ljava/lang/Enum;
.source ""


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/updatesdk/b/i/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/updatesdk/b/i/a$c;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/huawei/updatesdk/b/i/a$c;

.field public static final enum b:Lcom/huawei/updatesdk/b/i/a$c;

.field private static final synthetic c:[Lcom/huawei/updatesdk/b/i/a$c;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/huawei/updatesdk/b/i/a$c;

    const/4 v1, 0x0

    const-string v2, "CONFIRM"

    invoke-direct {v0, v2, v1}, Lcom/huawei/updatesdk/b/i/a$c;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/updatesdk/b/i/a$c;->a:Lcom/huawei/updatesdk/b/i/a$c;

    new-instance v0, Lcom/huawei/updatesdk/b/i/a$c;

    const/4 v2, 0x1

    const-string v3, "CANCEL"

    invoke-direct {v0, v3, v2}, Lcom/huawei/updatesdk/b/i/a$c;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/updatesdk/b/i/a$c;->b:Lcom/huawei/updatesdk/b/i/a$c;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/huawei/updatesdk/b/i/a$c;

    sget-object v4, Lcom/huawei/updatesdk/b/i/a$c;->a:Lcom/huawei/updatesdk/b/i/a$c;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/huawei/updatesdk/b/i/a$c;->c:[Lcom/huawei/updatesdk/b/i/a$c;

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

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/updatesdk/b/i/a$c;
    .locals 1

    const-class v0, Lcom/huawei/updatesdk/b/i/a$c;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/updatesdk/b/i/a$c;

    return-object p0
.end method

.method public static values()[Lcom/huawei/updatesdk/b/i/a$c;
    .locals 1

    sget-object v0, Lcom/huawei/updatesdk/b/i/a$c;->c:[Lcom/huawei/updatesdk/b/i/a$c;

    invoke-virtual {v0}, [Lcom/huawei/updatesdk/b/i/a$c;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/updatesdk/b/i/a$c;

    return-object v0
.end method
