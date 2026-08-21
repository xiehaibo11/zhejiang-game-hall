.class public final enum Lcom/huawei/hms/opendevice/d$a;
.super Ljava/lang/Enum;
.source "HttpClient.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/opendevice/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x401a
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/huawei/hms/opendevice/d$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/huawei/hms/opendevice/d$a;

.field public static final enum b:Lcom/huawei/hms/opendevice/d$a;

.field public static final synthetic c:[Lcom/huawei/hms/opendevice/d$a;


# instance fields
.field public d:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 1
    new-instance v0, Lcom/huawei/hms/opendevice/d$a;

    const/4 v1, 0x0

    const-string v2, "GET"

    invoke-direct {v0, v2, v1, v2}, Lcom/huawei/hms/opendevice/d$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/huawei/hms/opendevice/d$a;->a:Lcom/huawei/hms/opendevice/d$a;

    .line 2
    new-instance v0, Lcom/huawei/hms/opendevice/d$a;

    const/4 v2, 0x1

    const-string v3, "POST"

    invoke-direct {v0, v3, v2, v3}, Lcom/huawei/hms/opendevice/d$a;-><init>(Ljava/lang/String;ILjava/lang/String;)V

    sput-object v0, Lcom/huawei/hms/opendevice/d$a;->b:Lcom/huawei/hms/opendevice/d$a;

    const/4 v3, 0x2

    new-array v3, v3, [Lcom/huawei/hms/opendevice/d$a;

    .line 3
    sget-object v4, Lcom/huawei/hms/opendevice/d$a;->a:Lcom/huawei/hms/opendevice/d$a;

    aput-object v4, v3, v1

    aput-object v0, v3, v2

    sput-object v3, Lcom/huawei/hms/opendevice/d$a;->c:[Lcom/huawei/hms/opendevice/d$a;

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ILjava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 1
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    .line 2
    iput-object p3, p0, Lcom/huawei/hms/opendevice/d$a;->d:Ljava/lang/String;

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/huawei/hms/opendevice/d$a;
    .locals 1

    .line 1
    const-class v0, Lcom/huawei/hms/opendevice/d$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/huawei/hms/opendevice/d$a;

    return-object p0
.end method

.method public static values()[Lcom/huawei/hms/opendevice/d$a;
    .locals 1

    .line 1
    sget-object v0, Lcom/huawei/hms/opendevice/d$a;->c:[Lcom/huawei/hms/opendevice/d$a;

    invoke-virtual {v0}, [Lcom/huawei/hms/opendevice/d$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/huawei/hms/opendevice/d$a;

    return-object v0
.end method


# virtual methods
.method public a()Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/huawei/hms/opendevice/d$a;->d:Ljava/lang/String;

    return-object v0
.end method
