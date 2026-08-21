.class Lcom/carlt/networklibs/MethodManager;
.super Ljava/lang/Object;
.source "MethodManager.java"


# instance fields
.field private method:Ljava/lang/reflect/Method;

.field private netType:Lcom/carlt/networklibs/NetType;

.field private type:Ljava/lang/Class;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/Class;Lcom/carlt/networklibs/NetType;Ljava/lang/reflect/Method;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;",
            "Lcom/carlt/networklibs/NetType;",
            "Ljava/lang/reflect/Method;",
            ")V"
        }
    .end annotation

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 17
    iput-object p1, p0, Lcom/carlt/networklibs/MethodManager;->type:Ljava/lang/Class;

    .line 18
    iput-object p2, p0, Lcom/carlt/networklibs/MethodManager;->netType:Lcom/carlt/networklibs/NetType;

    .line 19
    iput-object p3, p0, Lcom/carlt/networklibs/MethodManager;->method:Ljava/lang/reflect/Method;

    return-void
.end method


# virtual methods
.method public getMethod()Ljava/lang/reflect/Method;
    .locals 1

    .line 43
    iget-object v0, p0, Lcom/carlt/networklibs/MethodManager;->method:Ljava/lang/reflect/Method;

    return-object v0
.end method

.method public getNetType()Lcom/carlt/networklibs/NetType;
    .locals 1

    .line 35
    iget-object v0, p0, Lcom/carlt/networklibs/MethodManager;->netType:Lcom/carlt/networklibs/NetType;

    return-object v0
.end method

.method public getType()Ljava/lang/Class;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 27
    iget-object v0, p0, Lcom/carlt/networklibs/MethodManager;->type:Ljava/lang/Class;

    return-object v0
.end method

.method public setMethod(Ljava/lang/reflect/Method;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/carlt/networklibs/MethodManager;->method:Ljava/lang/reflect/Method;

    return-void
.end method

.method public setNetType(Lcom/carlt/networklibs/NetType;)V
    .locals 0

    .line 39
    iput-object p1, p0, Lcom/carlt/networklibs/MethodManager;->netType:Lcom/carlt/networklibs/NetType;

    return-void
.end method

.method public setType(Ljava/lang/Class;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "*>;)V"
        }
    .end annotation

    .line 31
    iput-object p1, p0, Lcom/carlt/networklibs/MethodManager;->type:Ljava/lang/Class;

    return-void
.end method
