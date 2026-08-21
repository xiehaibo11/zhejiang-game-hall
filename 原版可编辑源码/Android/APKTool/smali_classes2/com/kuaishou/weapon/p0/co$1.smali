.class final Lcom/kuaishou/weapon/p0/co$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kuaishou/weapon/p0/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kuaishou/weapon/p0/co;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Ljava/lang/String;


# direct methods
.method constructor <init>(ZLjava/lang/String;)V
    .locals 0

    iput-boolean p1, p0, Lcom/kuaishou/weapon/p0/co$1;->a:Z

    iput-object p2, p0, Lcom/kuaishou/weapon/p0/co$1;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    iget-boolean p1, p0, Lcom/kuaishou/weapon/p0/co$1;->a:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kuaishou/weapon/p0/co$1;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    :cond_0
    return-void
.end method
