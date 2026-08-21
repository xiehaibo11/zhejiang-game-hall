.class Lcom/kuaishou/weapon/p0/cv$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kuaishou/weapon/p0/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/cv;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/kuaishou/weapon/p0/cv;


# direct methods
.method constructor <init>(Lcom/kuaishou/weapon/p0/cv;)V
    .locals 0

    iput-object p1, p0, Lcom/kuaishou/weapon/p0/cv$1;->a:Lcom/kuaishou/weapon/p0/cv;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;)V
    .locals 1

    :try_start_0
    iget-object v0, p0, Lcom/kuaishou/weapon/p0/cv$1;->a:Lcom/kuaishou/weapon/p0/cv;

    invoke-virtual {v0, p1}, Lcom/kuaishou/weapon/p0/cv;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 0

    return-void
.end method
