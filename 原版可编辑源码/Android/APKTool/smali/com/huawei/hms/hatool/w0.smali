.class public final enum Lcom/huawei/hms/hatool/w0;
.super Ljava/lang/Enum;
.source ""


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/hms/hatool/w0;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/huawei/hms/hatool/w0;

.field public static final enum b:Lcom/huawei/hms/hatool/w0;

.field public static final enum c:Lcom/huawei/hms/hatool/w0;

.field public static final enum d:Lcom/huawei/hms/hatool/w0;

.field public static final synthetic e:[Lcom/huawei/hms/hatool/w0;


# direct methods
.method public static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/huawei/hms/hatool/w0;

    const/4 v1, 0x0

    const-string v2, "IMEI"

    invoke-direct {v0, v2, v1}, Lcom/huawei/hms/hatool/w0;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/hatool/w0;->a:Lcom/huawei/hms/hatool/w0;

    new-instance v0, Lcom/huawei/hms/hatool/w0;

    const/4 v2, 0x1

    const-string v3, "UDID"

    invoke-direct {v0, v3, v2}, Lcom/huawei/hms/hatool/w0;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/hatool/w0;->b:Lcom/huawei/hms/hatool/w0;

    new-instance v0, Lcom/huawei/hms/hatool/w0;

    const/4 v3, 0x2

    const-string v4, "SN"

    invoke-direct {v0, v4, v3}, Lcom/huawei/hms/hatool/w0;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/hatool/w0;->c:Lcom/huawei/hms/hatool/w0;

    new-instance v0, Lcom/huawei/hms/hatool/w0;

    const/4 v4, 0x3

    const-string v5, "EMPTY"

    invoke-direct {v0, v5, v4}, Lcom/huawei/hms/hatool/w0;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/huawei/hms/hatool/w0;->d:Lcom/huawei/hms/hatool/w0;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/huawei/hms/hatool/w0;

    sget-object v6, Lcom/huawei/hms/hatool/w0;->a:Lcom/huawei/hms/hatool/w0;

    aput-object v6, v5, v1

    sget-object v1, Lcom/huawei/hms/hatool/w0;->b:Lcom/huawei/hms/hatool/w0;

    aput-object v1, v5, v2

    sget-object v1, Lcom/huawei/hms/hatool/w0;->c:Lcom/huawei/hms/hatool/w0;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/huawei/hms/hatool/w0;->e:[Lcom/huawei/hms/hatool/w0;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/hms/hatool/w0;
    .locals 1

    const-class v0, Lcom/huawei/hms/hatool/w0;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/hms/hatool/w0;

    return-object p0
.end method

.method public static values()[Lcom/huawei/hms/hatool/w0;
    .locals 1

    sget-object v0, Lcom/huawei/hms/hatool/w0;->e:[Lcom/huawei/hms/hatool/w0;

    invoke-virtual {v0}, [Lcom/huawei/hms/hatool/w0;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/hms/hatool/w0;

    return-object v0
.end method
